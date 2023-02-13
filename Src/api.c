#include "api.h"
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"



void TaskA(void* argument){

    for(;;){     
        HAL_GPIO_TogglePin(LEDORANGE_GPIO_Port,LEDORANGE_Pin);
        vTaskDelay(200 / portTICK_PERIOD_MS);
    }
}
void TaskB(void* argument){

    for(;;){
        HAL_GPIO_TogglePin(LEDBLUE_GPIO_Port,LEDBLUE_Pin);
	    vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}
void TaskC(void* argument){

    for(;;){
        HAL_GPIO_TogglePin(LEDGREEN_GPIO_Port,LEDGREEN_Pin);
        vTaskDelay(600 / portTICK_PERIOD_MS);
    
    }
}
