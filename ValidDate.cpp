#include "ValidDate.h"

//ѕроверить попадание даты в допустимый диапазон
bool ValidDate::isRange(int day_value, int last_day)
{
    if (1 <= day_value && day_value <= last_day)
        return true;
    return false;
}

//Сеттер установки даты
void ValidDate::setDate(int date_day, int date_month, int date_year)
{
    day = date_day;
    month = date_month;
    year = date_year;
}

//Метод проверки валидности даты
bool ValidDate::isValid()
{
    //Если месяц вне диапазона - дата не валидна€
    if (month < 1 || month > 12)
        return false;

    //Если февраль: проверяем високосный ли год
    if (month == 2)
    {
        if (isLeap() == true)
            return isRange(day, 29);
        else
            return isRange(day, 28);
    }

    //Если месяц один из 30-дневных, проверяем попадание даты в интервал допустимых значений
    int months_30[4] = { 4, 6, 9, 11 };  
    for (int i = 0; i < 4; i++)
        if (months_30[i] == month)
            return isRange(day, 30);

    //Если месяц в пределах допустимых, но не сработало ни одно условие ранее - месяц 31-дневный
    return isRange(day, 31);
    
}

//Метод проверки високосный ли год
bool ValidDate::isLeap()
{
    //год €вл€етс€ високосным в двух случа€х: либо он кратен 4, но при этом не кратен 100, либо кратен 400.
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}