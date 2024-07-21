#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    int height;
};


//Male class inherit human class
//All the human class members are inherited using protected mode

class Male:protected Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    //Here Height is protected

};

int main(){
    //Since it is protected-protected we cannot access directly outside the class
    Male object1;
    
    cout<<object1.height<<endl;//it can't be accessed

    object1.color="blue";
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}
