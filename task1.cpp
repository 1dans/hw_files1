#include "task1.h"
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void task1()
{
	fstream file1("task1file1.txt", ios::in);
	fstream file2("task1file2.txt", ios::in);
	if (!file1) {
		cout << "���� \"task1file1.txt\" �� ��������\n";
		return;
	}

	if (!file2) {
		cout << "���� \"task1file2.txt\" �� ��������\n";
		return;
	}
	string line1, line2;
    int lineNum = 1;
    while (getline(file1, line1) && getline(file2, line2)) {
        if (line1 != line2) {
            cout << "����� " << lineNum << " �� ��������:" << endl;
            cout << "���� 1: " << line1 << endl;
            cout << "���� 2: " << line2 << endl;
        }
        lineNum++;
    }

    while (getline(file1, line1)) {
        cout << "���� 1 �� ���������� ����� �� ������� " << lineNum << ": " << line1 << endl;
        lineNum++;
    }

    while (getline(file2, line2)) {
        cout << "���� 2 �� ���������� ����� �� ������� " << lineNum << ": " << line2 << endl;
        lineNum++;
    }
    file1.close();
    file2.close();
	cout << "�������� ����������\n";
    welcoming();
}
