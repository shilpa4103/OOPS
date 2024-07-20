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

    //Copy constructor
    //shallow copy here we use same array where hero1 and hero2 both point to same array
    // Hero(Hero& temp){
    //     this->name=temp.name;
    //     this->health=temp.health;
    //     this->level=temp.level;
    // }

    //deep constructor here we create a different array
    Hero(Hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
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

};

int main(){
    //creation of Object
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Shilpa";
    hero1.setName(name);
    hero1.print();

    //default copy constructor will do a shallow copy
    Hero hero2(hero1);
    hero2.print();
    

    hero1.name[0]='A';
    hero1.print();
    hero2.print();
    return 0;

}

//Output
// Constructor called
// name is Shilpa
// health is 12
// level is D


// name is Shilpa
// health is 12
// level is D


// name is Ahilpa
// health is 12
// level is D


// name is Shilpa
// health is 12
// level is D