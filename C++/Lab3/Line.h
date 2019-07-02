#pragma once
#include "Stack.h"

class Line: protected Stack {
	private:
		int* m_key;
		//массив информативных полей
		int* m_next;
		//массив индексов следующих элементов
		int first;
		//индекс первого элемента списка
		int current;
		//индекс текущего элемента списка
		int size;
		//максимальное число элементов в списке
		int ind;
		//индекс свободного элемента в массиве
	public:
		List(int = 10);
		void operator + (int); //добавить перед текущим
		void operator - ();
		void operator ++ ();
		void operator -- ();
		void print(const char*);
	};
};