#include "Header.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");
	char name[20] = "input.txt";
	std::cout << "������� �������� �����(��� ����������): ";
	std::cin >> name;
	File mainfile(name);
	mainfile.getfile();
	mainfile.setfile();
	system("Pause");
}