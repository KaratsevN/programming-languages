#pragma once

class Autobus {
protected:
    class Elem {
    public:
        void *key;
        Elem *next;

        Elem() {
            key = 0;
            next = 0;
        }

        Elem(void *d) {
            key = d;
            next = 0;
        }
    };

    Elem *first;
    Elem *curr;
public:
    Autobus();

    virtual ~Autobus();

    void operator+(void *);

    void push(void *d);

    void operator-();
};

void Autobus::operator-() {
    if (first) {
        Elem *ph = first;
        if (ph == curr) {
            first = ph->next; //первым станет следующий
            curr = first; //текущим станет он же
            delete ph;
        } else {
            while (ph->next != curr)
                ph = ph->next;
            ph->next = curr->next;
            delete curr;
            curr = ph;
        }
    }
}

void Autobus::operator+(void *d) {
    Elem *ph = new Elem(d);
    if (curr) {
        ph->next = curr->next;
        curr->next = ph;
    } else {
        ph->next = 0;
        first = ph;
        curr = ph;
    }
}

void Autobus::push(void *d) {
//выделение памяти через вызов конструктора с параметром
    Elem *ph = new Elem(d);
    if (curr) {
        ph->next = curr->next;
        curr->next = ph;
    } else {
        ph->next = 0;
        first = ph;
        curr = ph;
    }
}

Autobus::Autobus() {
    first = 0;
    curr = 0;
}

Autobus::~Autobus() {
    if (first) {
        curr = first;
        while (first) {
            first = first->next;
            delete curr;
            curr = first;
        }
    }
}