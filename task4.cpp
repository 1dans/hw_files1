#include "task4.h"
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void task4()
{
	fstream file("task4text.txt", ios::in);
	if (!file) {
		cout << "Помилка відкриття файлу \"task4text.txt\"\n";
		return;
	}
	string line, longestLine;
	int maxLength = 0;
	while (getline(file, line)) {
		if (line.length() > maxLength) {
			maxLength = line.length();
			longestLine = line;
		}
	}
	cout << "Найдовший рядок: " << longestLine << ". Його довжина " << maxLength << " символів\n";
	file.close();
	cout << "Робота з файлом завершена\n";
	welcoming();
}
