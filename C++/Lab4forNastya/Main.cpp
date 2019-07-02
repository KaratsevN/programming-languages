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
	Files lst; //ќбъ€вл€ем переменную, тип которой есть список
	while (c != '~'){
		cout << "¬ведите команду(a - добавить, s - показать, ~ - выйти, d - задать дату удалени€): ";
		cin >> c;
		cout << endl;
		switch (c)
		{
		case 'a':
			GetSystemTime(&st);
			cout << "¬ведите им€ файла: ";
			cin >> name;
			cout << "ƒату вы будете вводить собственноручно?(дл€ удаление файлов)(y/n)";
			cin >> ifs;
			if (ifs == 'y') {
				cout << "¬ведите дату в формате YYYYMMDD";
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
			cout << "¬ведите дату удалени€(в формате YYYYMMDD): ";
			cin >> refreshtime;
			break;
		}
	}
	system("Pause");
}