#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};


//Single-level-inheritence
class Dog:public Animal{

};

int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}

//Output
// Speaking
// 6422356