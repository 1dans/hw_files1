#include "task2.h"
#include "main.h"
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

void task2()
{
	fstream file("task2text.txt", ios::in);
	if (!file) {
		cout << "Файл \"task2text.txt\" не знайдено\n";
		return;
	}
	string line;
	regex vowel("[aeiouyAEIOUYаоуеиіАОУЕИІ]");  // вирішив тут використати регулярні вирази, які на одному з уроків згадував Олександр Прасов
	regex nums("[0-9]");
	regex letters("[a-zA-Zа-яА-ЯІіЇїЄєҐґ]"); // через isalpha і isdigit видавало помилку 
	int countLines = 0, countSym = 0, countVowels = 0, countConsonants = 0, countNums = 0;
	while (getline(file, line)) {
		countLines++;
		for (char ch : line) {
			if (regex_match(string(1, ch), nums)) countNums++;
			else if (regex_match(string(1, ch), letters)) {
				if (regex_match(string(1, ch), vowel)) countVowels++;
				else countConsonants++;
			}
			countSym++;
		}
	}
	cout << "Кількість символів у файлі: " << countSym << "\nРядки: " << countLines << "\nГолосні літери: " << countVowels << "\nПриголосні: " << countConsonants << "\nКількість чисел: " << countNums << endl;
	file.close();
	cout << "Завдання виконано\n";
	welcoming();
}
