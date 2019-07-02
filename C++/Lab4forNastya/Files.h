#pragma once
#include "File.h"
#include <iomanip>

class Files : public File {
	public:
		~Files() {
			while (Head) //���� �� ������ �� ������ ������ ���-�� ����
			{
				Tail = Head->Next; //��������� ����� ������ ���������� ����� ������
				delete Head; //������� ������ �� ������� �����
				Head = Tail; //����� ������ ������ �� ����� ���������� ��������
			}
		}
		void refresh(int date);
		void show();
		void add(int date, string name); //������� ���������� ��������� � ������
};

void Files::show() {
		//������� ������ � �����
		Node *temp = Tail;
		//��������� ��������� �� ����� ���������� ��������
		/*while (temp != NULL) //���� �� ���������� ������ ��������
		{
			cout << temp->date << " "; //�������� �������� �� �����
			temp = temp->Prev; //���������, ��� ����� ����� ����������� ��������
		}
		cout << "\n";
		*/
		//������� ������ � ������
		temp = Head; //�������� ��������� �� ����� ������� ��������
		cout << setw(10) << "�������� �����"
			<< setw(20) << "���� ��������" << endl;
		while (temp != NULL) //���� �� �������� ������ ��������
		{
			cout << setw(10) << temp->date
				 << setw(20) << temp->name << endl; //������� ������ ��������� �������� �� �����
			temp = temp->Next; //����� ������ �� ����� ���������� ��������
		}
		cout << "\n";
	} //������� ����������� ������ �� ������}

void Files::add(int date, string name) {
	Node *temp = new Node; //��������� ������ ��� ����� ������� ���������
	temp->Next = NULL;  //���������, ��� ���������� �� ���������� ������ �����
	temp->date = date;//���������� �������� � ���������
	temp->name = name;
	if (Head != NULL) //���� ������ �� ����
	{
		temp->Prev = Tail; //��������� ����� �� ���������� ������� � �����. ����
		Tail->Next = temp; //��������� ����� ���������� �� ������� ��������
		Tail = temp; //������ ����� ������
	}
	else //���� ������ ������
	{
		temp->Prev = NULL; //���������� ������� ��������� � �������
		Head = Tail = temp; //������=�����=��� �������, ��� ������ ��������
	}
}

void Files::refresh(int date) {
	cout << "�� ��������� ����� ��� ����� �������:" << endl;
	cout << setw(10) << "�������� �����"
		<< setw(20) << "���� ��������" << endl;
	//Node* curr = temp->Head; // ������� ������� ������
	Node* curr = Head;
	while (curr != nullptr) // �������� �� ������
	{
		if (date > curr->date) {
			curr = curr->Prev;
			Node* tmp = curr->Next; // ��������� ������� 
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