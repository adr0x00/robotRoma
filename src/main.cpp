#include <Arduino.h>      
#include "display.h"
#include <sd.h> 
#include "dustsensor.h"
#include "time.h"
#include "temp_hum_sensor.h"
#include "dustsensor.h"
#include "gui.h"



void setup()
{
  
    gui_init();
    DisplayInit(); 
    
    
    //2. датчик влажности и температуры 
    Temperature(); 
    Humidity();

    //3. Инициализация времени 
    RTC_Init(); 
    Serial.println( GetTime() );  

    // функции инициализации RTC модуля
   
}

void loop() {
  // put your main code here, to run repeatedly:
  //  Функция для обработки событий LVGL
  //  Должна вызываться в основном цикле программы
  process_gui(); 
}