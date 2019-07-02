#pragma once
#ifndef STACK_H
#define STACK_H

class Stack {
	protected:
		struct Elem {
			int key;
			Elem* next; 
		};
		Elem* first;
		Elem* current;
	public:
		Stack();
		virtual ~Stack(); 
		void operator << (int); 
		void operator >> (int);
};
#endif