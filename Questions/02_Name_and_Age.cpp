#include <bits/stdc++.h> 

using namespace std;

class Person {

    private:
    string name;
    int age;

    public:
    void setValue(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
    void getValue() const {
        cout << "The name of the person is " << name << " and the age is " << age << "." << endl;
    }

};

int main() {

    Person person;
    string name;
    int age;

    cin >> name;
    cin >> age;


    person.setValue(name, age);

    person.getValue();


    return 0;
}