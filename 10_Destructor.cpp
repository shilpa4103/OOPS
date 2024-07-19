#include<bits/stdc++.h>
using namespace std;
//#include "hero.cpp";//we can define the class in other file and can be included

class Hero{
    //properties
    private:
    int health;

    public:
    char level;
    char *name;

    //when you write a constructor by yourself the default constructor that is inbuilt is destroyed 
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }

    //Parameterised constructor
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    void print(){
        cout<<"name is "<<name<<endl;
        cout<<"health is "<<health<<endl;
        cout<<"level is "<<level<<endl;
        cout<<endl<<endl;

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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};

int main(){
    //Static Allocation->calls destructor automatically
    Hero a;

    //Dynamic Allocation->manually destructor needs to be called
    Hero *b=new Hero();
    delete b;//calling destructor

    return 0;

}

//Output
// Constructor called
// Constructor called
// Destructor called
// Destructor called