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

    //static member
    static int time;

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

};


//Initialising static memebre outside the class
int Hero::time=5;
 
int main(){
    //static member does not belong to object so no need to create a object we can access directly
    //Static member belongs to class so Hero::time
    //::(scope resolution operator)
    cout<<Hero::time<<endl;

    Hero a;
    cout<<a.time<<endl;

    Hero b;
    b.time=10;
    cout<<a.time<<endl;
    cout<<b.time<<endl;


    return 0;

}

//Output
// 5
// Constructor called
// 5
// Constructor called
// 10
// 10