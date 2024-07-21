#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Dog:public Animal{

};

class Cat:public Animal{

};
int main(){
    Dog d;
    Cat c;
    d.bark();
    c.bark();
    return 0;
}

//Output
// Barking
// Barking
