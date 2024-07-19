//Default Constructor:
//1.Invoke during object creation
//No return type
//No i/p parameters

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
    Hero ramesh;//ramesh.Hero() Constructor called

    //Dynamically
    Hero *h=new Hero();//Constructor called

}


//Output
//Constructor called
//Constructor called