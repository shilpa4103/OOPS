#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class D{
    public :
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class B:public A{

};

class C:public A,public D{

};

int main(){
    B b;
    b.bark();
    C c;
    c.bark();
    c.speak();
    return 0;
}

//Output
// Barking
// Barking
// Speaking