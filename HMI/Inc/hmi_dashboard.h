#ifndef __HMI_DASHBOARD_H
#define __HMI_DASHBOARD_H

#include "buttons_types.h"

void hmi_dashboard_init(void);                    
void hmi_dashboard_show_screen(void);                 
void hmi_dashboard_update_data(void);     
void hmi_dashboard_1ms_clock(void);            
void hmi_dashboard_update_button(button_id_t button_id, button_press_type_t button_press_type);       

#endif