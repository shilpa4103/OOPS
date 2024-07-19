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

    //static member declaration
    static int time;

    //static function can only access static members
    static int random(){
        return time;
    }

    //when you write a constructor by yourself the default constructor that is inbuilt is destroyed 
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }


};


//Initialising static memeber outside the class
int Hero::time=5;
 
int main(){
    //calling static function 
    cout<<Hero::random()<<endl;
    return 0;
}

//Output
//5
