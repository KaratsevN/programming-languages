#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Rus");
	double a,b,c,x1,x2,dx,x,f;
	//double const eps = 0.000000001;
	printf("������� a:");
	scanf("%lf",&a);
	printf("\n������� b:");
	scanf("%lf",&b);
	printf("\n������� c:");
	scanf("%lf",&c);
	printf("\n������� x1:");
	scanf("%lf",&x1);
	printf("\n������� x2:");
	scanf("%lf",&x2);
	while(x1>x2){
		printf("\n�� ����� ������������ �������� x1,x2(x2 >= x1)");
		printf("\n������� x1:");
		scanf("%lf",&x1);
		printf("\n������� x2:");
		scanf("%lf",&x2);
	}
	printf("\n������� dx:");
	scanf("%lf",&dx);
	while(dx>fabs(x2-x1) || dx==0){
		printf("\n�� ����� ������������ �������� dx(dx =< |x2 � x1|, dx!=0)");
		printf("\n������� dx:");
		scanf("%lf",&dx);
	}
	x=x1;
	while(x<=x2){
		if(x<0 && b!=0){
			f=a*x*x*x+b*x*x;
			printf("|x= %11.3lf |f= %11.3lf |\n", x, f);
			x+=dx;
		}
		else{
				if(x>0 && b==0){
					if((x-a==0) && (x-c==0)){
						f=(x-a)/(x-c);
						printf("|x= %11.3lf |f= %11.3lf|\n", x, f);	
						x+=dx;
					}
					else{
						if(x-c==0){
							printf("|x= %11.3lf |f= error |\n", x);	
							x+=dx;
						}
					}
				}
				else{
					if((x==-10 || c==0) && (x+5==0)){
						f=(x+5)/c*(x-10);
						printf("|x= %11.3lf |f= %11.3lf|\n", x, f);
						//printf("|x= %11.3lf |f= error |\n", x);
						x+=dx;
					}
					else{
						if(x==10 || c==0){
							printf("|x= %11.3lf |f= error|\n", x);
							x+=dx;
						}
						else{
							f=(x+5)/c*(x-10);
							printf("|x= %11.3lf |f= %11.3lf|\n", x, f);
							x+=dx;
						}
					}
				}
			}
	}
	getch();
	return 0;
}