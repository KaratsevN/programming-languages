#include <stdio.h>
#include <conio.h>
#include <locale.h>
//#include <math.h>
#include <stdlib.h>

 int new_vector(int &n, int *vector);
 int write_vector(int n, int *vector, int *vectorb);
 int refresh_vector(int n, int *vector, int *vectorb);
 int sum_vector(int n, int *vector);

 int main(){
	setlocale(LC_ALL, "Rus");
	int n;
	int *vector = new int [];
	int *vectorb = new int [];
	//int sum = 0;
	new_vector(n, vector);
	write_vector(n,vector, vectorb);
	refresh_vector(n,vector, vectorb);
	sum_vector(n,vector);
	write_vector(n,vector, vectorb);
	getch();
	return 0;
}

 int new_vector(int &n, int *vector){
	int min,max,rand_int;
	int ifint;
	printf("������� ������ ������� n:\n");
	scanf("%i", &n);
	printf("������ ������� � ����������?(1/0)\n");
	scanf("%i", &ifint);
	if( ifint == 1 ){
		for(int i=0;i<n; i++){
		scanf("%i", &vector[i]);
		}
	}else{
		printf("������� min:\n");
		scanf("%i", &min);
		printf("������� max:\n");
		scanf("%i", &max);
		for(int i=0;i<n; i++){
		rand_int = min + rand() %(max - min);
		vector[i] = rand_int;
		}
	}
	return 0;
}

 int write_vector(int n, int *vector, int *vectorb){
	for(int i = 0; i<n; i++){
		printf("%i ",vector[i]);
	}
	printf("\n");
	for(int i = 0; i<n; i++){
		printf("%i ",vectorb[i]);
	}
	return 0;
}

 int refresh_vector(int n, int *vector, int *vectorb){
	//int a;
	for(int i=0;i<n;i++){
		vectorb[i]=vector[n-i-1];
		/*a = vector[i];
		vector[i]=vector[n-1-i];
		vector[n-1-i]=a;*/
	}
	printf("�������� � ������� ���������! ��-���-��-��-���!\n");
	return 0;
}
 int sum_vector(int n, int *vector){
	 int sum =0;
	for(int i=0;i<n;i++){
		if((vector[i]+i)%3==0){
		sum+=vector[i];
		}
	}
	printf("����� �����: %i", sum);
	printf("\n");
	return 0;
 }
/*readmassiv(int n, *massiv[]){
	int min,max,rand_int;
	printf("������� min:\n");
	scanf("%i", &min);
	printf("������� max:\n");
	scanf("%i", &max);
	for(int i=0;i<n; i++){
		rand_int = min + rand() %(max - min);
		vector[i] = rand_int;
		printf("%i ",vector[i]);
		return vector[i];
	}
}*/
/*
 int readvector(){
	int min,max,n,rand_int;
	int massiv[10] = {0};
	printf("������� min:\n");
	scanf("%i", &min);
	printf("������� max:\n");
	scanf("%i", &max);
	printf("������� ������ �������:\n");
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
	ptrfile=fopen("text.txt","r+"); //��� ��� ���� ������ )

	while ((fscanf(ptrfile, "%d",&s)!=EOF))
	{    if(!ptrfile) break;    //����� �� ����� �������
			k+=1;
	}
	int *vector = new int [n];
	int *c = (int*) malloc(k*sizeof(int));  //������ ���� ������������
	 
	rewind(ptrfile);    //������������ ���� ��� ���������� ������
	for(i=0;i<k;i++)
	{
		fscanf(ptrfile, "%d",&c[i]);
		printf("c[%d]=%d  ",i,c[i]);
	}
	fclose(ptrfile);
	free(c); //������� �����, ����� ��� �� ����� (�� �� ������ =)
}*/