#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};


class Dog:public Animal{

};

class GermanShepherd:public Dog{

};

int main(){
    GermanShepherd g;
    g.speak();
    cout<<g.age<<endl;
    return 0;
}

//Output
// Speaking
// 6422356

//Animal is inherited by Dog;Dog is inherited by GermanShephard