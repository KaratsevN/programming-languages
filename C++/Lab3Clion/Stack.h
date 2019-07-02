#ifndef LAB3CLION_STACK_H
#define LAB3CLION_STACK_H
#include "Stack.h"
#include <stdio.h>

using namespace std;
class Stack {
protected:
    struct Elem {
        int key;
        Elem* next;
        Elem* prev;
    };
    Elem* first;
    Elem* current;
public:
    Stack();
    virtual ~Stack();
    void operator << (int d);
    void operator >> (int d);
    void print();
};

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
    Elem* pk = first;
    current = first;
    if(pk->next == NULL){
        first = 0;
    } else {
        pk = pk->next;
        while (pk->key != d) {
            pk = pk->next;
            current = current->next;
        }
        if(pk->next == NULL) {
            current->next = NULL;
            delete pk;
        } else {
            current->next = pk->next;
            delete pk;
        }
    }
}

void Stack::print(){
    Elem* pk = first;
    while (pk != NULL) {
        cout << pk->key;
        pk = pk->next;
    }
    cout << endl;
}

#endif //LAB3CLION_STACK_H
