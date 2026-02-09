#include "time.h"

RTC_DS3231 rtc;         // Создаем объект для работы с RTC

/*  Функция инициализрует время 
 *  возвращает true при успешной инициализации, false при ошибке шины или после сброса питания RTC 
 */
bool RTC_Init(void)
{
    Serial.print("Инициализациия RTC модуля: ");

    if (rtc.begin()){
        Serial.println("Успешная инициализации RTC модуля");
        return true;
    } else {
        Serial.println("Ошибка инициализации RTC модуля");
        return false;
    }
}
