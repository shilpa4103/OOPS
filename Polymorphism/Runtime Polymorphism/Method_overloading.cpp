#include <iostream>

using namespace std;


class Hero{

 //properties
   public:
   int health;

   void sayhello(){
    cout<<"hello Shilpa"<<endl;
   }
//return type of methods will lead to runtime polymorphism

//    int sayhello(){
//         cout<<"hello Shilpa"<<endl;
//         return 1
//    }

//Number of arguments can be vary
//type of argument should be different

    void sayhello(string name){
        cout<<"hello "<<name<<endl;
    }

    int sayhello(int n){
        cout<<"hello Shilpa "<<n<<endl;
        return 1;
    }

   //default argumnts
   //can call with 2,3,4 arguments
      int sayhello(int n,int s,int x=0,int k=0){
        cout<<"hello Shilpa"<<n<<endl;
        return 1;
   }

};



int main(){
   Hero h;
   h.sayhello(2);
}