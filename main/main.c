#include "blink0.h"
#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void app_main(void *pvParams)
{
    xTaskCreatePinnedToCore(&led_blink1,"LED_BLINK1",10000,NULL,1,NULL,0);
    xTaskCreatePinnedToCore(&led_blink2,"LED_BLINK2",10000,NULL,1,NULL,1);


    
}