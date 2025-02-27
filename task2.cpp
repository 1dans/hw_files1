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
		cout << "���� \"task2text.txt\" �� ��������\n";
		return;
	}
	string line;
	regex vowel("[aeiouyAEIOUY���������Ȳ]");  // ������ ��� ����������� �������� ������, �� �� ������ � ����� �������� ��������� ������
	regex nums("[0-9]");
	regex letters("[a-zA-Z�-��-߲�������]"); // ����� isalpha � isdigit �������� ������� 
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
	cout << "ʳ������ ������� � ����: " << countSym << "\n�����: " << countLines << "\n������ �����: " << countVowels << "\n���������: " << countConsonants << "\nʳ������ �����: " << countNums << endl;
	file.close();
	cout << "�������� ��������\n";
	welcoming();
}
