#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class File {
	public:
		struct Node       //Структура являющаяся звеном списка
		{
			std::string name;
			int date;	//Значение x будет передаваться в список
			Node *Next, *Prev; //Указатели на адреса следующего и предыдущего элементов списка
		};
		Node *Head, *Tail; //Указатели на адреса начала списка и его конца
		File() :Head(NULL), Tail(NULL) {}; //Инициализируем адреса как пустые 
		//~File(); //Деструктор
};