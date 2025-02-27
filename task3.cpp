#include "task3.h"
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void task3()
{
	fstream fRead("task3Source.txt", ios::in);
	fstream fWrite("task3Result.txt", ios::app);
	string last_line, temp;
	if (!fRead) {
		cout << "Не вдалося відкрити файл \"task3Source.txt\"\n";
		return;
	}

	if (!fWrite) {
		cout << "Не вдалося відкрити файл \"task3Result.txt\"\n";
		return;
	}

	while (getline(fRead, temp)) {
		if (temp != "") {
			last_line = temp;
		}
	}
	
	if (last_line == "") cout << "Файл порожній\n";
	else
	{
		fWrite << last_line << endl;
		cout << "Останній рядок був успішно доданий в кінець файлу\n";
	}

	fRead.close();
	fWrite.close();

	welcoming();
}
