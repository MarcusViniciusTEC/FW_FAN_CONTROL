#ifndef __HMI_DASHBOARD_CFG_H
#define __HMI_DASHBOARD_CFG_H


#define NUMBER_OF_SEGMENTS 7
#define NUMBER_OF_DIGITS   10

#define DISPLAY_1_ON();    HAL_GPIO_WritePin(DISPLAY_1_GPIO_Port, DISPLAY_1_Pin, GPIO_PIN_SET);
#define DISPLAY_1_OFF();   HAL_GPIO_WritePin(DISPLAY_1_GPIO_Port, DISPLAY_1_Pin, GPIO_PIN_RESET);

#define DISPLAY_2_ON();    HAL_GPIO_WritePin(DISPLAY_1_GPIO_Port, DISPLAY_2_Pin, GPIO_PIN_SET);
#define DISPLAY_2_OFF();   HAL_GPIO_WritePin(DISPLAY_1_GPIO_Port, DISPLAY_2_Pin, GPIO_PIN_RESET);

#define TIME_DELAY_DISP1 5
#define TIME_DELAY_DISP2 7

#define vector_pin_display_7seg     \
{                                   \
   {                                \ 
       .GPIO =  DISP_A_GPIO_Port,   \ 
       .pin  =  DISP_A_Pin          \
   }                                \
   ,                                \
   {                                \ 
       .GPIO =  DISP_B_GPIO_Port,   \ 
       .pin  =  DISP_B_Pin          \
   }                                \
    ,                               \
   {                                \ 
       .GPIO =  DISP_C_GPIO_Port,   \ 
       .pin  =  DISP_C_Pin          \
   }                                \
    ,                               \
   {                                \ 
       .GPIO =  DISP_D_GPIO_Port,   \ 
       .pin  =  DISP_D_Pin          \
   }                                \
    ,                               \
   {                                \ 
       .GPIO =  DISP_E_GPIO_Port,   \ 
       .pin  =  DISP_E_Pin          \
   }                                \
    ,                               \
   {                                \ 
       .GPIO =  DISP_F_GPIO_Port,   \ 
       .pin  =  DISP_F_Pin          \
   }                                \
    ,                               \
   {                                \ 
       .GPIO =  DISP_G_GPIO_Port,   \ 
       .pin  =  DISP_G_Pin          \
   }                                \
}  



// NUMBER 0 TO 9

#define vector_digit_display    \
{                               \
    {                           \
        1,1,1,1,1,1,0           \
    },                          \ 
    {                           \
        0,1,1,0,0,0,0           \
    },                          \    
    {                           \    
        1,1,0,1,1,0,1           \
    },                          \
    {                           \
        1,1,1,1,0,0,1           \
    },                          \
    {                           \
         0,1,1,0,0,1,1          \
    },                          \
    {                           \
         1,0,1,1,0,1,1          \
    },                          \
    {                           \
         0,0,1,1,1,1,1          \
    },                          \
    {                           \
        1,1,1,0,0,0,0           \
    },                          \
    {                           \
        1,1,1,1,1,1,1           \
    },                          \
    {                           \
        1,1,1,0,0,1,1           \
    }                           \
}


#endif
