#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <locale.h>
//3 variant 7 laba

struct PRICE {
	char name[30];
	char madein[20];
	char date[20];
	char price[10];
	char name_market[50];
};

int add_product(int n, PRICE* mas){
	for(int i=0; i<n; i++){
		printf("Введите название %i товара: ",i);
		scanf("%s",&mas[i].name);
		printf("Введите страну производителся %i товара: ",i);
		scanf("%s",&mas[i].madein);
		printf("Введите дату %i товара: ",i);
		scanf("%s",&mas[i].date);
		printf("Введите цену %i товара: ",i);
		scanf("%s",&mas[i].price);
		printf("Введите название магазина %i товара: ",i);
		scanf("%s",&mas[i].name_market);
	}
	return 0;
}

int print_all_product(int n, PRICE* mas){
	for(int i=0; i<n; i++){
		printf("\nТовар: %i",i);
		printf("\n\tНазвание: %s",&mas[i].name);
		printf("\n\tСтрана производитель: %s",&mas[i].madein);
		printf("\n\tДата: %s",&mas[i].date);
		printf("\n\tСтоимость: %s",&mas[i].price);
		printf("\n\tНахождение: %s",&mas[i].name_market);
	}
	return 0;
}

int print_product(int n, PRICE* mas){
	char name_find_product[20] = {0};
	int k=0;
	printf("\nИмя искомого продукта:");
	scanf("%s", name_find_product);
	for(int i=0; i<n; i++){
		if(strcmp(mas[i].name, name_find_product)==0){
			k++;
			printf("\nТовар: %i",i);
			printf("\n\tСтоимость: %s",&mas[i].price);
			printf("\n\tНахождение: %s",&mas[i].name_market);
		}
	}
	if(k==0){printf("\nТоварара нет в списке");}
	return 0;
}

int sort_product(int n, PRICE* mas){
	char cpy_name[30] = {0};
	char cpy_madein[20] = {0};
	char cpy_date[20] = {0};
	char cpy_price[10] = {0};
	char cpy_name_market[50] = {0};
    for(int i = 0 ; i < n - 1; i++) { 
       for(int j = 0 ; j < n - i - 1 ; j++) { 
		if(strcmp(mas[j].name, mas[j+1].name)>0){
			strcpy(cpy_name,"");
			strcpy(cpy_madein,"");
			strcpy(cpy_date,"");
			strcpy(cpy_price,"");
			strcpy(cpy_name_market,"");
			strcpy(cpy_name, mas[j].name);
			strcpy(cpy_madein, mas[j].madein);
			strcpy(cpy_date, mas[j].date);
			strcpy(cpy_price, mas[j].price);
			strcpy(cpy_name_market, mas[j].name_market);
			strcpy(cpy_name, mas[j].name);
			strcpy(mas[j].name,"");
			strcpy(mas[j].madein,"");
			strcpy(mas[j].date,"");
			strcpy(mas[j].price,"");
			strcpy(mas[j].name_market,"");
			strcpy(mas[j].name, mas[j+1].name);
			strcpy(mas[j].madein, mas[j+1].madein);
			strcpy(mas[j].date, mas[j+1].date);
			strcpy(mas[j].price, mas[j+1].price);
			strcpy(mas[j].name_market, mas[j+1].name_market);
			strcpy(mas[j+1].name,"");
			strcpy(mas[j+1].madein,"");
			strcpy(mas[j+1].date,"");
			strcpy(mas[j+1].price,"");
			strcpy(mas[j+1].name_market,"");
			strcpy(mas[j+1].name, cpy_name);
			strcpy(mas[j+1].madein, cpy_madein);
			strcpy(mas[j+1].date, cpy_date);
			strcpy(mas[j+1].price, cpy_price);
			strcpy(mas[j+1].name_market, cpy_name_market);
		}
	   }
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "Rus");
	PRICE product[size] = {0};
	int size_p = 0;
	int act = -1;
	printf("Введите количесвто товаров:");
	scanf("%i", &size_p);
	while(act!=0){
	printf("\nЧто делать будем(0–ничего, 1 – ввод продуктов, 2 - поиск товара, 3 – вывод всех товаров)?:");
	scanf("%i", &act);
		switch(act){
			case 0: {act=0; break;}
			case 1: {add_product(size_p, product); break;}
			case 2: {print_product(size_p, product); break;}
			case 3: {print_all_product(size_p, product);; break;}
			case 4: {sort_product(size_p, product); break;}
		}
	}
    return 0;
}