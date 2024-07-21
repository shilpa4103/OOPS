#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
};


//Male class inherit human class
//All the human class members are inherited using protected mode
//Protected members cannot be accessable outside the class 
//Can be accessable inside the same class as well as the child class

class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    //Here height is protected
    //Since it acts like private we can access using getter
    // int getHeight(){
    //     return height;
    // }


    void getHeight(){
        cout<<height<<endl;
    }
};

int main(){
    //Since it is public-protected we cannot access directly outside the class
    Male object1;
    
    //cout<<object1.getHeight()<<endl;

    //we can call the method of the child class there it can access
    object1.getHeight();

    object1.color="blue";
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}

//Output
// -746099818
// blue
// male sleeping