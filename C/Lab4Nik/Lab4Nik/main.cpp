#include <stdio.h>
#include <conio.h>
#include <locale.h>
//#include <math.h>
#include <stdlib.h>

double new_matr(int &n, double **A);
double refresh_matr(int n, double **A);
//int write_matr(int &n, int *A);
double write_matr(int n, double **A);
//double delete_matr(int &n, double **A);

int main(){
	setlocale(LC_ALL, "Rus");
	int n = 1;
	double **A = (double**)malloc(n*sizeof(double*));
	new_matr(n,A);
	refresh_matr(n,A);
	write_matr(n,A);
	//delete_matr(n,A);
	getch();
	return 0;
}

double new_matr(int &n, double **A){
	FILE *in;
	int ifint;
	char input_file[10] = {0};
	printf("Добрый день/вечер/ночь.\n");
	printf("Вы будете вводить матрицу с клавиатуры?(1/0)\n");
	scanf_s("%i", &ifint);
	if( ifint == 1 ){
	printf("Введите размер массива");
	scanf_s("%i", &n);
		for(int i=0;i<n; i++){
			A[i] = (double*)malloc(n*sizeof(double));
			for(int j=0; j<n; j++){
				printf("A[%i][%i] = ", i, j);
				scanf_s("%lf", &A[i][j]);
			}
		}
	}else{
		printf("Введите размер массива");
		scanf_s("%i", &n);
		printf("Введите имя файла:(вместе с расширением)");
		scanf("%s", input_file);
		printf("Opening...\n"); 	
		fopen_s(&in, input_file, "r+"); 
		if(in == NULL){ 
			printf("Cant open.\n");
		} 
		else{
			printf("Successful.\n");
		}
		for(int i=0;i<n; i++){
			A[i] = (double*)malloc(n*sizeof(double));
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			fscanf(in, "%lf",&A[i][j]);
			}
		}
		fclose(in);
	}
	return 0;
}

double write_matr(int n, double **A){
	printf("\n");
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			printf(" %4.1lf ", A[i][j]);
		}
    printf("\n");
	}
	return 0;
}

double refresh_matr(int n, double **A){
	double p=0;
	double **C = (double**)malloc(n*sizeof(double*));
	double **P = (double**)malloc(n*sizeof(double*));
	double **B = (double**)malloc(n*sizeof(double*));
	for(int i=0;i<n;i++){
	C[i] = (double*)malloc(n*sizeof(double));
	B[i] = (double*)malloc(n*sizeof(double));
	P[i] = (double*)malloc(n*sizeof(double));
		for(int j=0;j<n;j++){
			p=i+j+1;
			C[i][j]=1/p;
			B[i][j]=A[i][j];
			if(i==j){
				B[i][j]= A[i][j]-1;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n; j++){
		P[i][j]=0;
			for(int k=0; k < n; k++){
				P[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0;j<n; j++){
			A[i][j]=P[i][j]+C[i][j];
		}
	}
	return 0;
}