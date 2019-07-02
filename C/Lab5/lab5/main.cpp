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
	char input_file[127];
	char output_file[127];
	printf("Введите имя файла:(вместе с расширением)");
	scanf("%s", input_file);
	fopen_s(&in, input_file, "r+"); 
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
	getch();
}

void refresh(char str[]){
	FILE *out;
	int i = strlen(str);
	int j = 0;
	char word[30] = {0};
	char output_file[20] = {0};
	printf("Введите название файла для вывода текста: ");
	scanf("%s", output_file);
	fopen_s(&out, output_file, "w+"); 
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
	printf("\n");	
	char *istr = strtok (str," ,.");
	while(istr!=NULL){
		if (strcmp (istr, word)==0){
			//printf("\nСтроки идентичны");
		}
		else{
			memset(output_str,0,strlen(output_str));
			memcpy(output_str, istr, strlen(istr));
			output_str[strlen(output_str)] = output_str[0];
			fputs(" ", out);
			fputs(output_str, out);
			printf(" %s ", output_str);
		}
	istr = strtok (NULL," ,.");
	}
	fclose(out);
}