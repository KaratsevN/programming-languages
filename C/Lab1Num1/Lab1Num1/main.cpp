#include<stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double ai, a1, a2, sum;
	int n;
	printf("Введите n:");
	scanf("%i", &n);
	a1=0;
	a2=0;
	sum =0;
	ai=0;
	int i =0;
	for(i;i<=n; i++){
	//простите мне, пожалуйста, этот косыль
		if(i==0){
		i++;
		}
		ai=(double) 1/(i+a1+a2);
		a2=a1;
		a1=ai;
		sum= sum+ai;
	}
	/*Как уст румяных без улыбки,
	Без грамматической ошибки
	Я русской речи не люблю
	*/
	printf("sum= %lf\n", sum);
	getchar();
	getchar();
	return 0;
}
