#include <iostream>
#include <conio.h>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double **A;
	int n = 0, m = 0;
	A = new double*[n];
	char buffer[100];
	file_input(A, n, m, buffer);
	system("pause");
	return 0;
}
/*double change_input(double **A, int n, int m) {
	char a = 'a';
	cout << "Будем вводить с клавитуры?(y/n)";
	cin >> a;
	cout << a;
	if (a == 'y') {
		keyboard_input(A, n, m);
	}
	else {
		if (a == 'n') {
			file_input(A, n, m);
		}
		else {
			change_input(A, n, m);
		}
	}
	return 0;
	//**A;
}

double keyboard_input(double **A, int n, int m) {
	double k;
	cout << "Введите n";
	cin >> n;
	cout << "Введите m";
	cin >> m;
	A = new double *[n];
	for (int i = 0; i < n; i++) {
		A[i] = new double[m];
		for (int j = 0; j < m; j++) {
			cout << "A[" << i << "]" << "[" << j << "]";
			cin >> k;
			A[i][j] = k;
		}
	}
	write_matr(A, n, m);
	_getch();
	return 0;
};*/

double file_input(double **A, int &n, int &m, char buffer[]) {
	cout << "Введите имя файла(вместе с разрешением):";
	cin >> buffer;
	ifstream in(buffer);
	in >> n;
	in >> m;
	A = new double*[n];
	for (int i = 0; in.good() && i < n; i++) {
		A[i] = new double[m];
		for (int j = 0; j < m; j++) {
			in >> A[i][j];
			//cout << A[i][j] << ' ';
		}
	}
	char tr;
	cout << "\nБудем сортировать пузырьком?(y/n)(n - вставками)";
	cin >> tr;
	if (tr == 'y') {
		//write_matr(A, n, m);
		sort_by_bubble(A, n, m);
		//write_matr(A, n, m);
	}
	else {
		//write_matr(A, n, m);
		sort_by_inserts(A, n, m);
		//write_matr(A, n, m);
	}
	cout << "\nМассив отсортировался! Ура! Теперь можно попить чаек!";
	cout << "\nБудем выводить в файл?(y/n)(n - консоль)";
	cin >> tr;
	if (tr == 'y') {
		file_output(A, n, m);
	}
	else {
		write_matr(A, n, m);
	}
	in.close();
	return 0;
};

double write_matr(double **A, int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << " " << A[i][j] << " ";
		}
	}
	return 0;
}

double sort_by_bubble(double **A, int n, int m){
	for(int k = 0; k < n; k++)
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - i - 1; j++) {
			if (A[k][j] < A[k][j + 1]) {
				double temp = A[k][j];
				A[k][j] = A[k][j + 1];
				A[k][j + 1] = temp;
			}
		}
	}
	return 0;
}
double sort_by_inserts(double **A, int n, int m) {
	double temp = 0;
	int	item;
	for (int k = 0; k < n; k++) {
		for (int i = 1; i < m; i++)
		{
			temp = A[k][i];
			item = i - 1;
			while (item >= 0 && A[k][item] < temp)
			{
				A[k][item + 1] = A[k][item];
				A[k][item] = temp;
				item--;
			}
		}
	}
	return 0;
}

double file_output(double **A, int n, int m) {
	ofstream out;
	char name_file[100] = {0};
	cout << "Введите название файла, в кот. будет выводиться";
	cin >> name_file;
	out.open(name_file);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			out << A[i][j] << " ";
		}
		out << "\n";
	}
	out.close();
	return 0;
}