#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
};


//Male class inherit human class
//All the human class members are inherited using private mode
//Private members cannot be accessable outside the class
//Can be accessable inside the same class 

class Male:private Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    //using getter we can access
    int getHeight(){
       return height;
    }

    

};

int main(){
    //Since it is public-private we cannot access directly outside the class
    Male object1;
    
    cout<<object1.getHeight()<<endl;

    object1.color="blue";
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}

//Output
//-746099818
// blue
// male sleeping