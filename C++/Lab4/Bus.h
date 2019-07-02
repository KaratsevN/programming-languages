#include "Autobus.h"
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <iostream>

class Bus : public Autobus {
private:
    std::ifstream input;
    struct myData {
        int number;
        std::string drivername;
        int route;
    };

public:
    Bus();

    void operator+(int n);

    void open(std::string inputfile);

    void push(int n, std::string dr, int r);

    void print();

    void del(int number);

    void refresh(int num, Bus *obj);
};

void Bus::refresh(int num, Bus *obj) {
    Elem *curr = first;
    Elem *curr1 = obj->first;
    while (((myData *) (curr->key))->number != num) {
        //(myData*)(curr1->key))->number)
        curr = curr->next;
    }
    myData *t = new myData;
    t->number = ((myData *) (curr->key))->number;
    t->drivername = ((myData *) (curr->key))->drivername;
    t->route = ((myData *) (curr->key))->route;
    /*((myData*)(curr1->key))->number = ((myData*)(curr->key))->number;
    ((myData*)(curr1->key))->drivername = ((myData*)(curr->key))->drivername;
    ((myData*)(curr1->key))->route = ((myData*)(curr->key))->route;*/
    obj->Autobus::push((void *) t);
    this->del(num);
}

void Bus::del(int num) {
    Elem *curr = first;
    while (((myData *) (curr->key))->number != num) {
        curr = curr->next;
    }
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

void Bus::open(std::string filename) {
    std::string name;
    std::string lastname;
    std::string lastlastname;
    input.open(filename);
    input.seekg(0);
    //input >> buffer;
    //size = std::stoi(buffer);
    while (!input.eof()) {
        myData *t = new myData;
        input >> t->number;
        input >> lastname;
        input >> name;
        input >> lastlastname;
        t->drivername += lastname;
        t->drivername += " ";
        t->drivername += name;
        t->drivername += " ";
        t->drivername += lastlastname;
        input >> t->route;
        Autobus::push((void *) t);
    }
    input.close();
}

void Bus::operator+(int n) {
    myData *t = new myData;
    Autobus::operator+((void *) t);
}

void Bus::print() {
    Elem *ph = first;
    std::cout
            << std::setw(6) << "№" << "  "
            << setiosflags(std::ios::left) << std::setw(30) << "name lastname"
            << std::setw(10) << "№ route" << std::endl;
    while (ph) {
        if (ph == curr)
            std::cout << setiosflags(std::ios::left)
                      << std::setw(6) << ((myData *) (ph->key))->number
                      << std::setw(55) << ((myData *) (ph->key))->drivername
                      << std::setw(6) << ((myData *) (ph->key))->route << "<<" << std::endl;
        else
            std::cout
                    << std::setw(6) << ((myData *) (ph->key))->number
                    << std::setw(55) << ((myData *) (ph->key))->drivername
                    << std::setw(6) << ((myData *) (ph->key))->route << std::endl;
        ph = ph->next;
    }
    std::cout << "\n\n";
}

Bus::Bus() : Autobus() {}

/*void Bus::open(std::string filename) {
    std::string name;
    std::string lastname;
    std::string lastlastname;
	input.open(filename);
	//input >> buffer;
	//size = std::stoi(buffer);
	while(!input.eof()) {
		this->drivername = " ";
		input >> this->number;
		input >> lastname;
		input >> name;
		input >> lastlastname;
		this->drivername += lastname;
        this->drivername += " ";
        this->drivername += name;
        this->drivername += " ";
        this->drivername += lastlastname;
		input >> this->route;
	}
	input.close();
}

template <typename I,typename S>
Bus<I,S>::~Bus() {
}

//bool Bus::push() {
//	try{
//		top++;
//		std::cin >> number;
//		//����� Autobus
//		stackPtr[top] =	number;
//
//	}
//	catch (...){
//		std::cout << "Not good" << std::endl;
//		return 1;
//	}
//}
//

template<typename I, typename S>
void Bus<I,S>::print()
{
	while(buses!=NULL) {
		std::cout << buses->number << buses->drivername << buses->route << std::endl;
	}
}*/