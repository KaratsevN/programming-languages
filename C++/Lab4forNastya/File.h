#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class File {
	public:
		struct Node       //��������� ���������� ������ ������
		{
			std::string name;
			int date;	//�������� x ����� ������������ � ������
			Node *Next, *Prev; //��������� �� ������ ���������� � ����������� ��������� ������
		};
		Node *Head, *Tail; //��������� �� ������ ������ ������ � ��� �����
		File() :Head(NULL), Tail(NULL) {}; //�������������� ������ ��� ������ 
		//~File(); //����������
};