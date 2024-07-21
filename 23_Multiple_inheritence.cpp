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

class Human{
    public :
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }

};

//Multiple inheritence
class Hybrid:public Animal,public Human{

};

int main(){
    Hybrid h;
    h.speak();
    h.bark();
    return 0;
}

//Output
// Speaking
// Barking
