#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Fraction {
private:
    int num;
    int den;
public:
    int nod(int x, int y) {
        if (!y)
            return x;
        nod(y, x / y);
    };

    Fraction() {
        setNum(0);
        setDen(0);
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
    Fraction add(Fraction f) {

    }
};






















class Point {
private:
    int x;
    int y;
    int z;
public:
    Point() {};
    Point(int x, int y, int z) {
        setX(x);
        setY(y);
        setZ(z);
    }
    void setX(int p) {
        x = p;
    }
    void setY(int p) {
        y = p;
    }
    void setZ(int p) {
        z = p;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getZ() {
        return z;
    }
    void print() {
        cout << '(' << x <<  ',' << y << ',' << z << ')' << endl;
    }
};
int main(){
   setlocale(LC_ALL, "ru");
   Fraction frunction(1, 2);
   frunction.print();


   //Point point(1, 2 ,3);
   //point.print();
    return 0;
}
