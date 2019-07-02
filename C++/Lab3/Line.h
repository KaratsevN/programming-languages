#pragma once
#include "Stack.h"

class Line: protected Stack {
	private:
		int* m_key;
		//������ ������������� �����
		int* m_next;
		//������ �������� ��������� ���������
		int first;
		//������ ������� �������� ������
		int current;
		//������ �������� �������� ������
		int size;
		//������������ ����� ��������� � ������
		int ind;
		//������ ���������� �������� � �������
	public:
		List(int = 10);
		void operator + (int); //�������� ����� �������
		void operator - ();
		void operator ++ ();
		void operator -- ();
		void print(const char*);
	};
};