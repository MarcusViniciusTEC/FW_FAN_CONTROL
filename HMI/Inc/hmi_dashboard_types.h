#ifndef __HMI_DASHBOARD_TYPES_H
#define __HMI_DASHBOARD_TYPES_H

#include "hmi_dashboard_cfg.h"

typedef enum
{
    STATE_IDLE =  0U,
    STATE_ENABLE_DISP1,
    STATE_ENABLE_DISP2,
    
}hmi_dashboard_disp_state_t;

typedef struct 
{
    hmi_dashboard_disp_state_t disp_state;
    uint8_t delay_disp1;
    uint8_t delay_disp2;
}hmi_dashboard_ctrl_t;

typedef struct
{
    GPIO_TypeDef* GPIO;
    uint16_t pin;
}disp_7seg_info_t;

#endif
