#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include <iostream>

using namespace std;

void welcoming() {
    cout << "яке завданн€ ви хот≥ли би передивитис€?\n1 - пошук в≥дм≥нностей файл≥в\n2 - статистика\n3 - видаленн€ останнього р€дка\n4 - найдовший р€док в файл≥\nq - вих≥д\n¬аш виб≥р: ";
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
        default: cout << "¬ибачте, такого завданн€ не ≥снуЇ\n";
        }
    }
    cout << "Ѕувайте!";
}
