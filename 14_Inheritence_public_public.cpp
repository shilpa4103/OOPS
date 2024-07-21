#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;
};


//Male class inherit human class
//All the human class members are inherited using public mode 

class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){
    //Since it is public-public we can access directly
    Male object1;
    object1.height=150;
    object1.weight=50;
    object1.age=20;
    object1.color="blue";
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}

//Output
// 20
// 150
// 50
// blue
// male sleeping