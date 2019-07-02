#include <iostream>
#include <cstring>
#include <string.h> 
#include <conio.h>
#include <locale.h>

void refresh(char str[]);

int main() {
	setlocale(LC_ALL, "Rus");
	char str[255] = {0};
	FILE *in;
	FILE *out;
	/*char input_file[127];
	char output_file[127];
	printf("Введите имя файла:(вместе с расширением)");
	scanf("%s", input_file);
	printf("Введите имя выводимого файла:");
	scanf("%s", output_file);*/
	printf("Opening...\n");
	fopen_s(&in, "text.txt", "r+"); 
	fopen_s(&out, "result.txt", "w+"); 	
	/*
	fopen_s(&in, input_file, "r+"); 
	fopen_s(&out, output_file, "w+"); 
	*/
	if(in == NULL){ 
		printf("Cant open.\n");
	} 
	else{
		printf("Successful.\n");
	}

	fgets(str, sizeof(str), in);
	printf("%s\n", str);

//=================================================

	refresh(str);
	fclose(in); 
	fclose(out);
	getch();
	//return 0;
}

void refresh(char str[]){
	int i = strlen(str);
	int j = 0;
	char word[20] = {0}; 

	while(str[i]!=' '){
		i--;
	}
	i++;
	while(str[i]!= '.'){
		word[j]= str[i];
		i++;
		j++;
	}
	printf("Длинна: %i", i);
	printf("поледнее слово: %s", word);
	char str_cpy[32] = {0};
	char output_str[128] = {0};
	char *istr = strtok (str," ,");
	while(istr!=NULL){
		if (strcmp (istr, word)==0){
			printf("\nСтроки идентичны");
		}
		else{
			memcpy(str_cpy, istr, strlen(istr));
			
			printf("\nСтроки отличаются");
		}
	istr = strtok (NULL," ,");
	}
	printf("\nвывод строки: %s", output_str);
}