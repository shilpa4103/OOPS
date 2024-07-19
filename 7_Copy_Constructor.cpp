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

    //Parameterised constructor
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    //Copy constructor
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"health is "<<health<<endl;
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
    Hero suresh(70,'C');
    suresh.print();

    //copy constructor
    Hero ritesh(suresh);
    ritesh.print();
    return 0;

}

// Output
// health is 70
// level is C
// health is 70
// level is C