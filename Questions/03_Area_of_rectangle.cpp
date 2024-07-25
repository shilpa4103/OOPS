#include <bits/stdc++.h> 
using namespace std;

class Rectangle {
    // Write your code here.
    public:
    int length;
    int breadth;

    void setArea(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }

    int getArea(){
        return this->length*this->breadth;
    }

};
int main() {

    Rectangle r;
    int length;
    int breadth;

    cin >> length;
    cin >> breadth;

    r.setArea(length,breadth);
    cout<<r.getArea();


    return 0;
}