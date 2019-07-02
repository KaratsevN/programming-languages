#include "pattern.h"

void refresh(char str[]);

int main() {
	setlocale(LC_ALL, "Rus");
	Pattern<std::string> str(0,"/home/main/git/C_Plus_Lab/Lab5/input.txt");
	str.refresh();
	str.clear();
	/*
	char str[255] = {0};
	FILE *in;
	char input_file[127] = {0};
	printf("Введите имя файла:(вместе с расширением)");
	std::cin >> input_file;
	// /home/main/git/C_Plus_Lab/Lab5/input.txt
	// /home/main/git/C_Plus_Lab/Lab5/output.txt
	in = std::fopen( input_file, "r+");
	if(in == NULL){
		printf("Cant open.\n");
	}
	else{
		printf("Successful.\n");
	}

	fgets(str, sizeof(str), in);
	printf("%s\n", str);

	refresh(str);
	fclose(in);
}

void refresh(char str[]){
	FILE *out;
	int i = strlen(str);
	int j = 0;
	char word[30] = {0};
	char output_file[50] = {0};
	printf("Введите название файла для вывода текста: ");
	std::cin >> output_file;
	out = std::fopen(output_file, "w+");
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
	std::cout << std::endl;
	printf("\n");
	char *istr = strtok(str," ,.");
	while(istr!=NULL){
		if (strcmp (istr, word)==0){
			//printf("\nСтроки идентичны");
		}
		else{
		    bool ifs = false;
            for(int g = 1; g <= strlen(istr)-1; g++){
                if(istr[g]>istr[g-1] || istr[g]==istr[g-1] ){
                    ifs = true;
                }else{
                    ifs = false;
                    break;
                }
            }
            if(ifs == true){
                fputs(" ", out);
                fputs(istr, out);
                printf("%s ", istr);
            }
		}
	istr = strtok(NULL," ,.");
	}
	fclose(out);*/
}