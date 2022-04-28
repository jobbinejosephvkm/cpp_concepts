#include<iostream>
using namespace std;

class Animal {

    public:
        void makesound(){
            cout<<"Generic sound"<<endl;
        }
};
class Cat:public Animal {

    public:
        void makesound(){
            cout<<"Meow"<<endl;
        }
};
class Dog : public Animal {

    public:
        void makesound(){
            cout<<"Bow"<<endl;
        }
};

int main(){
    Animal a;
    a.makesound();
    Dog d;
    d.makesound();
    Cat c;
    c.makesound();
    return(0);
}
