#include<iostream>
using namespace std;

class base {
    public:
    void show(){
        cout<<"base class show"<<endl;
    }
    virtual void print(){
        cout<<"Base class print"<<endl;
    }
};
class derived:public base {
    public:
    void show(){
        cout<<"Derived class show"<<endl;
    }
    
    void print(){
        cout<<"Derived class print"<<endl;
    }
};

int main(){

    base *ptr;
    base b;
    derived d;
    derived *dptr;

    ptr = &d;
    ptr->show();
    ptr->print();

/*
    dptr = &d;
    dptr->show();
    dptr->print();
*/

    return(0);
}

