#include "api.h"
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"



void TaskA(void* argument){

    for(;;){  
        SEGGER_SYSVIEW_PrintfHost("TASK A!\n");
        HAL_GPIO_TogglePin(LEDORANGE_GPIO_Port,LEDORANGE_Pin);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
void TaskB(void* argument){

    for(;;){
        SEGGER_SYSVIEW_PrintfHost("TASK B!\n");
        HAL_GPIO_TogglePin(LEDBLUE_GPIO_Port,LEDBLUE_Pin);
	    vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
void TaskC(void* argument){

    for(;;){
        SEGGER_SYSVIEW_PrintfHost("TASK C!\n");
        HAL_GPIO_TogglePin(LEDGREEN_GPIO_Port,LEDGREEN_Pin);
        vTaskDelay(3000 / portTICK_PERIOD_MS);
    
    }
}
