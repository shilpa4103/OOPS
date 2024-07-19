#include<bits/stdc++.h>
using namespace std;
#include "hero.cpp";//we can define the class in other file and can be included

//class Hero{
    //properties
    //int health;
//};

class Hero1{

};
int main(){
    //creation of Object
    Hero h1;
    cout<<sizeof(h1)<<"\n";//output:4
    

    //creation of object for the class Hero1
    Hero1 h2;
    cout<<sizeof(h2);//output:1 
    //Note: whenever there is a empty class it's size is 1
    //1 byte of memory is allocated for a object 

    return 0;
}