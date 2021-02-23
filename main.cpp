#include <iostream>
#include "ValidDate.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "rus");
    int day, month, year, ans;

    ValidDate date;

    cout << "Введите дату для проверки валидности." << endl;
    cout << "День: ";   cin >> day;
    cout << "Месяц: ";  cin >> month;
    cout << "Год: ";    cin >> year;

    date.setDate(day, month, year);

    if (date.isLeap() == true) //Сообщить високосный ли год
        cout << std::endl << year << ": високосный." << endl;
    else
        cout << std::endl << year << ": не високосный." << endl;

    if (date.isValid() == true) //Проверка валидности даты
        cout << std::endl << "Допустимая дата." << endl;
    else 
        cout << endl << "Недопустимая дата." << endl;

    cout << endl;
    system("pause");
    return 0;
}