
#include "hmi_dashboard.h"
#include "hmi_dashboard_types.h"
#include "hmi.h"
#include "hmi_types.h"

/******************************************************************************/

static uint8_t vector [NUMBER_OF_DIGITS][NUMBER_OF_SEGMENTS]      = digit_display;
static disp_7seg_info_t disp_7seg_info  [NUMBER_OF_SEGMENTS]      = vector_pin_display_7seg;
static hmi_dashboard_ctrl_t hmi_dashboard_ctrl = {0};

/******************************************************************************/

static void hmi_dashboard_reset_segments(void);
static void display_write_segment(uint8_t segment, GPIO_PinState state);
static void hmi_dashboard_write_digit(uint8_t digit);
static void hmi_dashboard_write_number(uint8_t number);
void hmi_dashboard_1ms_clock(void);

/******************************************************************************/

void hmi_dashboard_init(void)
{
    hmi_dashboard_ctrl.delay_disp1 = 1;
    hmi_dashboard_ctrl.delay_disp2 = 1;

    hmi_dashboard_ctrl.disp_state = STATE_IDLE;
}    

/******************************************************************************/

void hmi_dashboard_1ms_clock(void)
{
    if(hmi_dashboard_ctrl.disp_state  == STATE_ENABLE_DISP1 && hmi_dashboard_ctrl.delay_disp1 > 0)
    {
        hmi_dashboard_ctrl.delay_disp1 --;
    }
    if(hmi_dashboard_ctrl.disp_state  == STATE_ENABLE_DISP2 && hmi_dashboard_ctrl.delay_disp2 > 0)
    {
        hmi_dashboard_ctrl.delay_disp2 --;
    }
}

/******************************************************************************/

static void hmi_dashboard_write_number(uint8_t number)
{
    uint8_t tens = number / 10;
    uint8_t unit = number % 10;
    switch (hmi_dashboard_ctrl.disp_state)
    {
    case STATE_IDLE:
        hmi_dashboard_ctrl.disp_state = STATE_ENABLE_DISP1;
        break;
    case STATE_ENABLE_DISP1:
        DISPLAY_2_OFF();
        DISPLAY_1_ON();
        hmi_dashboard_write_digit(unit);
        if(hmi_dashboard_ctrl.delay_disp1 == 0)
        {
            hmi_dashboard_ctrl.delay_disp2 = TIME_DELAY_DISP2;
            hmi_dashboard_ctrl.disp_state = STATE_ENABLE_DISP2;
        }
        break;
    case STATE_ENABLE_DISP2:
        DISPLAY_1_OFF();
        DISPLAY_2_ON();
        hmi_dashboard_write_digit(tens);
        if(hmi_dashboard_ctrl.delay_disp2 == 0)
        {
            hmi_dashboard_ctrl.delay_disp1 = TIME_DELAY_DISP1;
            hmi_dashboard_ctrl.disp_state = STATE_IDLE;
        }
        break;
    default:
        break;
    }
}

/******************************************************************************/

static void hmi_dashboard_write_digit(uint8_t digit)
{
    for(uint8_t index = 0; index < NUMBER_OF_SEGMENTS; index ++)
    {
        display_write_segment(index, (GPIO_PinState)(vector[digit][index]));
    }
}

/******************************************************************************/

static void display_write_segment(uint8_t segment, GPIO_PinState state)
{
    disp_7seg_info_t set_disp_7seg_info;
    set_disp_7seg_info =  disp_7seg_info[segment];
    HAL_GPIO_WritePin(set_disp_7seg_info.GPIO, set_disp_7seg_info.pin, state);
}

/******************************************************************************/

static void hmi_dashboard_reset_segments(void)
{
    for(uint8_t index = 0; index < NUMBER_OF_SEGMENTS; index ++)
    {
        display_write_segment(index, GPIO_PIN_RESET);
    }
}

/******************************************************************************/

void hmi_dashboard_show_screen(void)
{
    hmi_dashboard_reset_segments();
}

/******************************************************************************/

void hmi_dashboard_update_data(void)
{
    hmi_dashboard_write_number(85);
}

/******************************************************************************/

void hmi_dashboard_update_button(button_id_t button_id, button_press_type_t button_press_type)
{

}    