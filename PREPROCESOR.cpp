#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Fraction {
private:
    int num; //числитель
    int den; //знаменатель
    void reduction() {
        int n = nod(num, den);
        num /= n;
        den /= n;
    }
    int nod(int x, int y) {
        if (!y)
            return x;
        nod(y, x % y);
    };
public:
    Fraction() {
        setNum(0);
        setDen(1);
    }
    Fraction(int n, int m) {
        setNum(n);
        setDen(m);
    }
    void setNum(int p) {
        num = p;
    }
    void setDen(int p) {
        if (!p)
            den = 1;
        else
            den = p;
    }
    int getNum() {
        return num;
    }
    int getDen() {
        return den;
    }
    void print() {
        cout << num << '/' << den << endl;
    }
    Fraction* add(Fraction f) {
        Fraction* rez = new Fraction;
        rez->setNum(num * f.den + den * f.num);
        rez->setDen(den * f.den);
        rez->reduction();
        return rez;
    }
    Fraction* sub(Fraction f) {
        Fraction* rez = new Fraction;
        rez->setNum(num * f.den - den * f.num);
        rez->setDen(den * f.den);
        rez->reduction();
        return rez;
    }
    Fraction* mul(Fraction f) {
        Fraction* rez = new Fraction;
        rez->setNum(num * f.num);
        rez->setDen(den * f.den);
        rez->reduction();
        return rez;
    }
    Fraction* div(Fraction f) {
        Fraction* rez = new Fraction;
        rez->setNum(num * f.den);
        rez->setDen(den * f.num);
        rez->reduction();
        return rez;
    }
};


int main(){
   setlocale(LC_ALL, "ru");
   Fraction f1(2, 4);
   f1.print();
   Fraction f2(12, 18);
   f2.print();
   Fraction* pf = f1.add(f2);
   pf->print();
   pf = f1.sub(f2);
   pf->print();
   pf = f1.mul(f2);
   pf->print();
   pf = f1.div(f2);
   pf->print();
    return 0;
}
