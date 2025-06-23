
#include "hmi_intro.h"
#include "hmi.h"
#include "hmi_types.h"

/***********************************************************************************/

void hmi_intro_init(void)
{

}   

/***********************************************************************************/

void hmi_intro_show_screen(void)
{
    HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(DISPLAY_1_GPIO_Port, DISPLAY_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(DISPLAY_2_GPIO_Port, DISPLAY_2_Pin, GPIO_PIN_SET);

    HAL_Delay(3000);

    hmi_set_screen(HMI_ID_SCREEN_DASHBOARD);
}  

/***********************************************************************************/

void hmi_intro_update_data(void)
{

}  

/***********************************************************************************/

void hmi_intro_update_button(button_id_t button_id, button_press_type_t button_press_type)
{

}     