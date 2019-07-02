#include "Files.h"
#include <windows.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	SYSTEMTIME st;
	GetSystemTime(&st);
	int refreshtime;
	char c = ' ';
	string kostil;
	string name;
	char ifs;
	int date;
	Files lst; //��������� ����������, ��� ������� ���� ������
	while (c != '~'){
		cout << "������� �������(a - ��������, s - ��������, ~ - �����, d - ������ ���� ��������): ";
		cin >> c;
		cout << endl;
		switch (c)
		{
		case 'a':
			GetSystemTime(&st);
			cout << "������� ��� �����: ";
			cin >> name;
			cout << "���� �� ������ ������� ���������������?(��� �������� ������)(y/n)";
			cin >> ifs;
			if (ifs == 'y') {
				cout << "������� ���� � ������� YYYYMMDD";
				cin >> date;
				lst.add(date, name);
			}
			else {
				cout << endl;
				kostil = to_string(st.wYear) + to_string(st.wMonth) + to_string(st.wDay);
				date = atoi(kostil.c_str());
				lst.add(date, name);
			}
			break;
		case 's':
			kostil = to_string(st.wYear) + to_string(st.wMonth) + to_string(st.wDay);
			date = atoi(kostil.c_str());
			lst.refresh(date);
			lst.show();
			break;
		case '~':
			exit(1);
			break;
		case 'd':
			cout << "������� ���� ��������(� ������� YYYYMMDD): ";
			cin >> refreshtime;
			break;
		}
	}
	system("Pause");
}