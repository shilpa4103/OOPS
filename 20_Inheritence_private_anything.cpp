//if the main class is private then it is Not accessebile if you inherit it in any mode:public,private,protected
#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    int height;
};


//Male class inherit human class 

class Male:private Human{
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    //Here Height is private

    void getHeight(){
        cout<<height<<endl;
    }

};

int main(){
    return 0;
}

