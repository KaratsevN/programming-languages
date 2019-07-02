#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

class File {
private:
	std::ifstream input;
	std::ofstream output;
	std::ofstream trick;
	std::ifstream xfile;
	char inname[30];
	char outname[30];
	public:
		File(char* name) {
			strcpy(inname, name);
			strcat_s(inname, ".txt");
			strcpy(outname, name);
			strcat_s(outname, ".dat");
			trick.open("transfer.txt");
			input.open(inname, std::ios::binary);
			output.open(outname);
			if(!input.is_open()) std::cout << "Файл не открыт";
		};
		
		void getfile() {
			char c;
			int asc = 0;
			char zero = '0';
			int lenght;
			char buf[10];
			while (!input.eof()) {
				input >> c;
				asc = c;
				_itoa(asc, buf, 2);
				lenght = (8 - strlen(buf));
				while (lenght != 0) {
					lenght--;
					trick << zero;
				}
				trick << buf;
			}
			trick.close();
		};
		void setfile() {
			xfile.open("transfer.txt");
			char c;
			int n = 0;
			while (!xfile.eof()) {
				n++;
				xfile >> c;

				if (n % 2 == 0) {
					output << c;
					output << " ";
					std::cout << c;
				}
			}
			std::cout << std::endl;
			std::cout << "Файлы успешно загрузились в: " << outname;
			std::cout << std::endl;
		};

		~File() {
			xfile.close();
			trick.close();
			input.close();
			output.close();
		};
};