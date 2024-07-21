//Default Constructor:
//Invoke during object creation
//No return type
//i/p parameters

#include<bits/stdc++.h>
using namespace std;
//#include "hero.cpp";//we can define the class in other file and can be included

class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    //when you write a constructor by yourself the default constructor that is inbuilt is destroyed 
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    //Parameterised Constructor
    Hero(int health,char level){
        cout<<"Adress of this "<<this<<endl;//So address of ramesh and address of this will be same
        this->health=health;//this keyword refers to object ramesh
        this->level=level;
         cout<<"Adress of health "<<&this->health<<endl;
        cout<<"Adress of level "<<&this->level<<endl;
    }

    void print(){
        cout<<"level is "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }

};

int main(){
    //creation of Object
    //statistically
    Hero ramesh(10,'A');//ramesh.Hero() Constructor called
    cout<<"Adress of ramesh "<<&ramesh<<endl;
    cout<<ramesh.getHealth()<<endl;

    // //Dynamically
     Hero *h=new Hero(11,'B');//Constructor called
     cout<<"Adress of h(memory) "<<&h<<endl;
     cout<<"Adress of h "<<&(*h)<<endl;
     cout<<h->getHealth()<<endl;

    // Hero *h1=new Hero(11);//Constructor called
    // cout<<"Adress of h1(memory) "<<&h1<<endl;
    // cout<<"Adress of h1 "<<&(*h1)<<endl;
    // cout<<h1->getHealth()<<endl;

    // Hero *h2=new Hero(11);//Constructor called
    // cout<<"Adress of h2(memory) "<<&h2<<endl;
    // cout<<"Adress of h2 "<<&(*h2)<<endl;
    // cout<<h2->getHealth()<<endl;

    // Hero *h3=new Hero(11);//Constructor called
    // cout<<"Adress of h3(memory) "<<&h3<<endl;
    // cout<<"Adress of h3 "<<&(*h3)<<endl;
    // cout<<h3->getHealth()<<endl;

    return 0;

}



//Output
// Adress of this 0x61fef8
// Adress of ramesh 0x61fef8
// 10
// Adress of this 0x917930
// Adress of h(memory) 0x61fef4
// Adress of h 0x917930
// 11
// Adress of this 0x917940
// Adress of h1(memory) 0x61fef0
// Adress of h1 0x917940
// 11
// Adress of this 0x917950
// Adress of h2(memory) 0x61feec
// Adress of h2 0x917950
// 11
// Adress of this 0x917960
// Adress of h3(memory) 0x61fee8
// Adress of h3 0x917960
// 11
