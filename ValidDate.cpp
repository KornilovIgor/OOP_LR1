#include "ValidDate.h"

//��������� ��������� ���� � ���������� ��������
bool ValidDate::isRange(int day_value, int last_day)
{
    if (1 <= day_value && day_value <= last_day)
        return true;
    return false;
}

//������ ��������� ����
void ValidDate::setDate(int date_day, int date_month, int date_year)
{
    day = date_day;
    month = date_month;
    year = date_year;
}

//����� �������� ���������� ����
bool ValidDate::isValid()
{
    //���� ����� ��� ��������� - ���� �� ��������
    if (month < 1 || month > 12)
        return false;

    //���� �������: ��������� ���������� �� ���
    if (month == 2)
    {
        if (isLeap() == true)
            return isRange(day, 29);
        else
            return isRange(day, 28);
    }

    //���� ����� ���� �� 30-�������, ��������� ��������� ���� � �������� ���������� ��������
    int months_30[4] = { 4, 6, 9, 11 };  
    for (int i = 0; i < 4; i++)
        if (months_30[i] == month)
            return isRange(day, 30);

    //���� ����� � �������� ����������, �� �� ��������� �� ���� ������� ����� - ����� 31-�������
    return isRange(day, 31);
    
}

//����� �������� ���������� �� ���
bool ValidDate::isLeap()
{
    //��� �������� ���������� � ���� �������: ���� �� ������ 4, �� ��� ���� �� ������ 100, ���� ������ 400.
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}