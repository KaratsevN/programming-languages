#pragma warning(disable:4996)
#pragma once
#include <iostream>
//#include <string.h>
//#include <stdio.h>
#include <cstring>

class Evm {
private:
	char* name;
	int freq;
	int ram;
	char type;
public:

	Evm& operator = (const Evm&);

	Evm(const char* = 0, int = 0, int = 0, char = 0);
	Evm(const Evm&);
	~Evm();


	bool operator == (const Evm&);
	friend Evm operator + (Evm&, Evm&);

	char* get_name() { return name; };
	int get_freq() { return freq; };
	int get_ram() { return ram; };
	char get_type() { return type; };

	void show();

	char set_name(const char* na);
	void set_freq(int fr) { freq = fr; };
	void set_ram(int ra) { ram = ra; };
	void set_type(char ty) { type = ty; };
};

Evm::Evm(const char* na, int fr, int ra, char ty) {
	if (na) {
		//delete[] name;
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	else
		name = 0;
	freq = fr;
	ram = ra;
	type = ty;
}

Evm::Evm(const Evm& p) {
	if (p.name) {
		//delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	else
		name = 0;
	freq = p.freq; ram = p.ram; type = p.type;
}

Evm::~Evm() {
}

void Evm::show() {
	printf("Name:%s\t", (char*)name);
	printf("Frequence:%i\t", (int)freq);
	printf("RAM:%i\t", (int)ram);
	if (type == 'C') {
		printf("Type:\tCISC\n");
	}
	else {
		if (type == 'R') {
			printf("Type:\tRISC\n");
		}
		else {
				printf("Type:\tCISC&RISC\n");
		}
	}
}

Evm & Evm::operator = (const Evm & p) {
	if (p.name) {
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	else
		name = 0;
	freq = p.freq; ram = p.ram; type = p.type;
	return *this;
}

bool Evm::operator == (const Evm& p) {
	if (strcmp(name, p.name) == 0) {
		return (freq == p.freq) ? (ram == p.ram) ? (type == p.type) : true : false;
		return true;
	}
	else
		return false;
}

Evm operator + (Evm& p1, Evm& p2) {
	Evm p3(p1);
	//char cpystr[40] = {0};
	int lenstr = strlen(p1.name) + strlen(p2.name) + 1;
	//strcpy(cpystr, p1.name);
	//delete[] p3.name;
	p3.name = new char[lenstr];
	//strcpy(p3.name, cpystr);
	strcat(p3.name, p2.name);
	p3.freq += p2.freq;
	p3.ram += p2.ram;
	p3.type += p2.type;
	return p3;
}

char Evm::set_name(const char* na) {
	if (na != 0) {
		delete[] name;
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	return 0;
}