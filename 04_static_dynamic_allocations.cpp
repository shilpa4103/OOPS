#include<bits/stdc++.h>
using namespace std;
//#include "hero.cpp";//we can define the class in other file and can be included

class Hero{
    //properties
    private:
    int health;

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
    //static allocation
    cout<<"Static allocation"<<endl;
    Hero a;
    a.setHealth(50);
    cout<<"health is "<<a.getHealth()<<endl;
    a.level='A';
    cout<<"level is "<<a.level<<endl;

    //Dynamic allocation
    cout<<"Dynamic allocation-1"<<endl;
    Hero *b=new Hero;
    (*b).setHealth(50);
    cout<<"health is "<<(*b).getHealth()<<endl;
    (*b).level='A';
    cout<<"level is "<<(*b).level<<endl;

    cout<<"Dynamic allocation-2"<<endl;
    //Hero *b=new Hero();//other way of creating dynamic object
    b->setHealth(60);//different way of accessing dyanamic objects
    cout<<"health is "<<b->getHealth()<<endl;
    b->level='B';
    cout<<"level is "<<b->level<<endl;

}


//Output
//Static allocation
//health is 50
//level is A
//Dynamic allocation-1
//health is 50
//level is A
//Dynamic allocation-2
//health is 60
//level is B
