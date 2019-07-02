#include "Stack.h"
#include <stdio.h>

Stack::Stack() {
	first = 0;
	current = 0;
}

Stack::~Stack() {
	if (first) {
		current = first;
		while (first) {
			first = first->next;
			delete current;
			current = first;
		}
	}
}

void Stack::operator << (int d) {
	Elem* ph = new Elem; 
	ph->key = d;

	if (first) { 
		if (current == first) {
			ph->next = current; 
			first = ph;
			current = ph;
		}
		else {
			Elem* pk = first; 
			while (pk->next != current)
				pk = pk->next;
			pk->next = ph;
			ph->next = current; 
			current = ph;
		}
	}
	else {
		ph->next = 0;
		first = ph;
		current = ph;
	}
}

void Stack::operator >> (int d) {
	ph->key = d;

	if (first) {
		if (current == first) {
			ph->next = current;
			first = ph;
			current = ph;
		}
		else {
			Elem* pk = first;
			while (pk->next != current)
				pk = pk->next;
			pk->next = ph;
			ph->next = current;
			current = ph;
		}
	}
	else {
		ph->next = 0;
		first = ph;
		current = ph;
	}
}

void operator >> (){

}
