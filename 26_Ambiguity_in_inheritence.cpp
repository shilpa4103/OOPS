#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Barking"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Speaking"<<endl;
    }

};


class C:public A,public B{

};

int main(){
    C obj;
    //obj.func();//Ambiguity
    //So ther is a scope resolution operator which specify the particular class
    obj.A::func();
    obj.B::func();

}

//Output
// Barking
// Speaking
