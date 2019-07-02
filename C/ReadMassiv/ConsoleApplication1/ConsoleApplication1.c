// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "locale.h"

//#include <stdlib.h>
float new_matr(int size);
float write_matr(int sizr, float** A);
float summC(int n, float** A);

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	float** A;
	FILE* myfile;
	fopen_s(&myfile, "massiv.txt", "r+");
	if (myfile == NULL) {
		printf("Cant open.\n");
	}
	else {
		printf("Successful.\n");
	}
	fscanf_s(myfile, "%d", &n);
	A = (float**)malloc(n * sizeof(float*));
	for (int i = 0; i < n; i++) {
		A[i] = (float*)malloc(n * sizeof(float));
		for (int j = 0; j < n; j++) {
			fscanf_s(myfile, "%f", &A[i][j]);
		}
	}

	printf("%d\n", n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2.f", A[i][j]);
		}
		printf("\n");
	}
	fclose(myfile);
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
