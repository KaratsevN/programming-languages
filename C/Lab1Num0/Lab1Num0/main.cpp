#include<stdio.h>
#include <locale.h>
#include <stdlib.h>
int function1(int x){
	if(x<0){
		x = 2-(x*x);
		return x;
	}
	else{
		x = function2(x);
		return x;
	}
}
int function2(int x){
	x = (x>4) ? x : x-3;
	return x;
}
int main(){
	int x, result;
	printf("x= ");
	scanf("%d", &x);
	x = function1(x);
	printf("%d\n", x);
	getch();
	getch();
	return 0;
}

/*int function1(int x){
	if(x<0){
	x = 2-(x*x);
	return x;
	}else{
	function2(x);
	return x;
	}
}
int function2(x){
	x = (x>4) ? x : x-3;
	return x;
}*/