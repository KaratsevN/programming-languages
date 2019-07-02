//
// Created by main on 10.12.18.
//
#ifndef LAB6_TAILOR_H
#define LAB6_TAILOR_H

#include <math.h>
#include <iostream>

using namespace std;
#define PI 3.14159265

class Tailor{
    public:
        int a;
        int n;
        int i;
        int fact(int k);
        friend istream& operator >> (istream&, Tailor&);
        friend ostream& operator << (ostream&, Tailor&);
};

int Tailor::fact(int k) {
    if (k < 0)
        return 0;
    if (k == 0)
        return 1;
    else
        return k * fact(k - 1);
}

istream& operator >> (istream& in, Tailor& t){
    cout << "Введите n: ";
    in >> t.n;
    cout << "Введите a: ";
    in >> t.a;
    cout << endl;
    return in;
}

ostream& operator << (ostream& out, Tailor& t) {
    int g = t.fact(2 * t.i);
    int l = t.fact(1 + 2 * t.i);
    if (t.i == 0) {
        out << "1+x" << " ";
        return out;
    } else {
        out << (int) (pow(-1, t.i)) << "*" << "("
            << "(" << (int) pow(t.a, 2 * t.i) << "*" << "x^(" << (int)(2*t.i) << ")" << "/"
            << t.fact(2 * t.i) << ")"
            << " + "
            << "(" << "x^(" << (1 + 2 * t.i) << ")" << "/" << l << ")"
            << ")"
            << " ";
        //tailor.i++;
        return out;
    }
}
#endif //LAB6_TAILOR_H
