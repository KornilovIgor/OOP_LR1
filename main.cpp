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

    cout << "������� ���� ��� �������� ����������." << endl;
    cout << "����: ";   cin >> day;
    cout << "�����: ";  cin >> month;
    cout << "���: ";    cin >> year;

    date.setDate(day, month, year);

    if (date.isLeap() == true) //�������� ���������� �� ���
        cout << std::endl << year << ": ����������." << endl;
    else
        cout << std::endl << year << ": �� ����������." << endl;

    if (date.isValid() == true) //�������� ���������� ����
        cout << std::endl << "���������� ����." << endl;
    else 
        cout << endl << "������������ ����." << endl;

    cout << endl;
    system("pause");
    return 0;
}