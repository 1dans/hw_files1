#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include <iostream>

using namespace std;

void welcoming() {
    cout << "��� �������� �� ����� �� ������������?\n1 - ����� ���������� �����\n2 - ����������\n3 - ��������� ���������� �����\n4 - ��������� ����� � ����\nq - �����\n��� ����: ";
}

int main()
{
    system("chcp 1251>null");
    welcoming();
    char choice = ' ';
    while (choice != 'q') {
        cin >> choice;
        switch (choice) {
        case '1': task1(); break;
        case '2': task2(); break;
        case '3': task3();  break;
        case '4': task4();  break;
        case 'q': break;
        default: cout << "�������, ������ �������� �� ����\n";
        }
    }
    cout << "�������!";
}
