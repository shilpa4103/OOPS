#include<bits/stdc++.h>
using namespace std;
//#include "hero.cpp";//we can define the class in other file and can be included

class Hero{
    //properties
    private:
    int health;//health is private can't be accessed outside the class 
    //To access private members outside the class we use getter and setter concept
    //These are nothing but a functions inside the class

    public:
    char level;

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
    Hero ramesh;
    //used getter & setter for private member health
    ramesh.setHealth(70);
    cout<<"health is "<<ramesh.getHealth()<<endl;


    //can access directly because level is public member
    ramesh.level='A';
    cout<<"level is "<<ramesh.level<<endl;
    ramesh.print();//public


    //used getter & setter for public member level
    ramesh.setLevel('B');
    cout<<"level is "<<ramesh.getLevel()<<endl;
    ramesh.print();//public

    return 0;
}

//Output
//health is 70
//level is A
//level is A
//level is B
//level is B