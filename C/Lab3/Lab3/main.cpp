#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int new_vector(int &n, int *vector);
int write_vector(int &n, int *vector);
int refresh_vector(int &n, int *vector);
int main(){
	setlocale(LC_ALL, "Rus");
	int n;
	int *vector = new int [];
	new_vector(n, vector);
	write_vector(n,vector);
	refresh_vector(n,vector);
	getch();
	return 0;
}
int new_vector(int &n, int* vector){
	int min,max,rand_int;
	int ifint;
	printf("введите размер массива n:\n");
	scanf("%i", &n);
	printf("Ѕудете вводить с клавиатуры?(1/0)\n");
	scanf("%i", &ifint);
	if( ifint == 1 ){
		for(int i=0;i<n; i++){
		scanf("%i", &vector[i]);
		}
	}else{
		printf("введите min:\n");
		scanf("%i", &min);
		printf("введите max:\n");
		scanf("%i", &max);
		for(int i=0;i<n; i++){
		rand_int = min + rand() %(max - min);
		vector[i] = rand_int;
		}
	}
	return 0;
}

int write_vector(int n, int* vector){
	for(int i = 0; i<n; i++){
		printf("%i ",vector[i]);
	}
}

int refresh_vector(int n, int* vector){
	int a;
	for(int i=0;i<n;i++){
		vector[i]=a;
		vector[i]=vector[n-i];
		vector[n]=a;
	}
	printf("Ёлементы в векторе помен€лсь. ќбана, епта!\n");
}
/*readmassiv(int n, *massiv[]){
	int min,max,rand_int;
	printf("введите min:\n");
	scanf("%i", &min);
	printf("введите max:\n");
	scanf("%i", &max);
	for(int i=0;i<n; i++){
		rand_int = min + rand() %(max - min);
		vector[i] = rand_int;
		printf("%i ",vector[i]);
		return vector[i];
	}
}*/
/*
void int readvector(){
	int min,max,n,rand_int;
	int massiv[10] = {0};
	printf("введите min:\n");
	scanf("%i", &min);
	printf("введите max:\n");
	scanf("%i", &max);
	printf("введите размер массива:\n");
	scanf("%i", &n);
	for(int i=0;i<10,i++){
		rand_int = min + rand() % (max - min);
		vector[i]=rand_int;
		printf(a[i]);
	}
}*/
/*read(){
	int k,i;
	FILE *ptrfile;
	k=0;
	int s;
	ptrfile=fopen("text.txt","r+"); //так мне было короче )

	while ((fscanf(ptrfile, "%d",&s)!=EOF))
	{    if(!ptrfile) break;    //чтобы не делал лишнего
			k+=1;
	}
	int *vector = new int [n];
	int *c = (int*) malloc(k*sizeof(int));  //должен быть динамическим
	 
	rewind(ptrfile);    //перематываем файл дл€ повторного чтени€
	for(i=0;i<k;i++)
	{
		fscanf(ptrfile, "%d",&c[i]);
		printf("c[%d]=%d  ",i,c[i]);
	}
	fclose(ptrfile);
	free(c); //убираем мусор, когда уже не нужен (но не раньше =)
}*/