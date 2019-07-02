#pragma once
#include "File.h"
#include <iomanip>

class Files : public File {
	public:
		~Files() {
			while (Head) //Пока по адресу на начало списка что-то есть
			{
				Tail = Head->Next; //Резервная копия адреса следующего звена списка
				delete Head; //Очистка памяти от первого звена
				Head = Tail; //Смена адреса начала на адрес следующего элемента
			}
		}
		void refresh(int date);
		void show();
		void add(int date, string name); //Функция добавления элементов в список
};

void Files::show() {
		//ВЫВОДИМ СПИСОК С КОНЦА
		Node *temp = Tail;
		//Временный указатель на адрес последнего элемента
		/*while (temp != NULL) //Пока не встретится пустое значение
		{
			cout << temp->date << " "; //Выводить значение на экран
			temp = temp->Prev; //Указываем, что нужен адрес предыдущего элемента
		}
		cout << "\n";
		*/
		//ВЫВОДИМ СПИСОК С НАЧАЛА
		temp = Head; //Временно указываем на адрес первого элемента
		cout << setw(10) << "Название файла"
			<< setw(20) << "Дата создания" << endl;
		while (temp != NULL) //Пока не встретим пустое значение
		{
			cout << setw(10) << temp->date
				 << setw(20) << temp->name << endl; //Выводим каждое считанное значение на экран
			temp = temp->Next; //Смена адреса на адрес следующего элемента
		}
		cout << "\n";
	} //Функция отображения списка на экране}

void Files::add(int date, string name) {
	Node *temp = new Node; //Выделение памяти под новый элемент структуры
	temp->Next = NULL;  //Указываем, что изначально по следующему адресу пусто
	temp->date = date;//Записываем значение в структуру
	temp->name = name;
	if (Head != NULL) //Если список не пуст
	{
		temp->Prev = Tail; //Указываем адрес на предыдущий элемент в соотв. поле
		Tail->Next = temp; //Указываем адрес следующего за хвостом элемента
		Tail = temp; //Меняем адрес хвоста
	}
	else //Если список пустой
	{
		temp->Prev = NULL; //Предыдущий элемент указывает в пустоту
		Head = Tail = temp; //Голова=Хвост=тот элемент, что сейчас добавили
	}
}

void Files::refresh(int date) {
	cout << "По истечению срока эти файлы удалены:" << endl;
	cout << setw(10) << "Название файла"
		<< setw(20) << "Дата создания" << endl;
	//Node* curr = temp->Head; // Текущий элемент списка
	Node* curr = Head;
	while (curr != nullptr) // Проходим по списку
	{
		if (date > curr->date) {
			curr = curr->Prev;
			Node* tmp = curr->Next; // удаляемый элемент 
			curr->Next = tmp->Next;
			curr = curr->Next;
			curr->Prev = tmp->Prev;
			curr = curr->Prev;
			cout << setw(10) << tmp->date
				<< setw(20) << tmp->name << endl;
			delete tmp;
		}
		curr = curr->Next;
	}

	cout << "\n";
}

/*
if (curr->Prev == NULL || curr == Head) {
	Head = curr->Next;
	Node* tmp = curr;
	curr = Head;
	delete tmp;
}
}
if (date > curr->date) {
	if (curr->Next == NULL || curr == Tail) {
		Tail = curr->Prev;
		Node* tmp = curr;
		curr = Tail;
		delete tmp;
	}
}
if (date > curr->date)
{
	/*if(curr->Prev == NULL || curr == Head){
		Head = curr->Next;
		Node* tmp = curr;
		curr = Head;
		delete tmp;
	}
	else {
		if (curr->Next == NULL || curr == Tail) {
			Tail = curr->Prev;
			Node* tmp = curr;
			curr = Tail;
			delete tmp;
		}
		else {*/
		//if (curr->Next != nullptr && curr->Prev != nullptr) {