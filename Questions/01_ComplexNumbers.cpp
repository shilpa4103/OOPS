#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imag;

    public:
    ComplexNumbers(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }
    void plus(ComplexNumbers &c) {
        this->real += c.real;
        this->imag += c.imag;
    }
     void multiply(ComplexNumbers &c) {
        int newReal = this->real * c.real - this->imag * c.imag;
        int newImag = this->real * c.imag + this->imag * c.real;
        this->real = newReal;
        this->imag = newImag;
    }

    void print(){
        cout << this->real << " + i" << this->imag << endl;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}