
#ifndef __HMI_CFG_H
#define __HMI_CFG_H

#include "buttons_types.h"
#include "hmi.h"
#include "hmi_intro.h"
#include "hmi_dashboard.h"


/*******************************************************************************/

#define HMI_NUMBER_OF_SCREENS 2

/*******************************************************************************/

#define vector_hmi_screens_default          \
{                                           \
    {                                       \
        HMI_ID_SCREEN_INTRO,                \
        hmi_intro_init,                     \
        hmi_intro_show_screen,              \
        hmi_intro_update_data,              \
        hmi_intro_update_button,            \
    }                                       \
    ,                                       \
    {                                       \
        HMI_ID_SCREEN_DASHBOARD,            \
        hmi_dashboard_init,                 \
        hmi_dashboard_show_screen,          \
        hmi_dashboard_update_data,          \
        hmi_dashboard_update_button,        \
    }                                       \
}

/*******************************************************************************/

#define vector_buttons_data_default                     0



#endif