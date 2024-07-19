#include<bits/stdc++.h>
using namespace std;
//#include "hero.cpp";//we can define the class in other file and can be included

class Hero{
    //properties
    //By deafult properties are private
    public:
    int health;//accessed outside the class
    void print(){
        cout<<"level is "<<level<<endl;//inside the class we can access private properties
    }
    private:
    char level;//cannot be accesed outside the class

};

int main(){
    //creation of Object
    Hero ramesh;
    cout<<"health is "<<ramesh.health<<endl;
    //cout<<"level is"<<ramesh.level<<endl;//error because level is private
    ramesh.print();
    return 0;
}