//
// Created by main on 07.12.18.
//

#ifndef LAB3CLION_LINE_H
#define LAB3CLION_LINE_H
#include "Stack.h"

class Line: protected Stack {
    public:
        void operator > (int t);
        void operator < (int t);
        void operator >> (char);
        void operator << (char);
        void operator >> (int d);
        void operator << (int d);
        void add(int d);
        void print();
    };

void Line::operator > (int t){
    Stack::operator >> (t);
    /*Elem* ph = new Elem;
    ph->key = t;
    current = first;
    if (first) {
        if (current == first) {
            ph->next = current;
            first = ph;
            current = ph;
        }
        else {
            current->next = ph;
            //ph->next = current;
            current = ph;
        }
    }
    else {
        ph->next = 0;
        first = ph;
        current = ph;
    }
    while(current->next != NULL){
        current = current->next;
    }*/
}

void Line::operator < (int t){
    Elem* ph = new Elem;
    ph->key = t;
    ph->next = first;
    first = ph;
}

void Line::print(){
    Elem* pk = first;
    while (pk != NULL) {
        cout << pk->key;
        pk = pk->next;
    }
    cout << endl;
}

void Line::operator << (int d){
    Stack::operator<<(d);
}

void Line::operator >> (int d){
    Stack::operator >> (d);
}

void Line::operator << (char){
    cout << endl;
    cout << "Удаляемый элемент: " << first->key;
    cout << endl;
    Elem* pk = first->next;
    delete first;
    first = pk;
}

void Line::operator >> (char){
    Elem* pk = first;
    while(pk->next != NULL) {
        pk = pk->next;
    }
    cout << endl;
    cout << "Удаляемый элемент: " << pk->key;
    cout << endl;
    Elem* pkk = first;
    while(pkk->next != pk) {
        pkk = pkk->next;
    }
    pkk->next = NULL;
    delete pk;
}

#endif //LAB3CLION_LINE_H
