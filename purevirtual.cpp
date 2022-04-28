#include<iostream>
using namespace std;

class base{

    public:
        virtual void getarea() = 0;
        virtual void printarea() = 0;
};

class Circle:public base {
    private:
        int radius;
        int area;
    public:
        Circle(int r){
            this->radius = r;
        }
        void getarea(){
            area = 3.14 * radius * radius;
        }
        void printarea(){
            cout<<"Circle area = "<<area<<endl;
        }

};

class Rectangle:public base {
    private:
        int length;
        int breadth;
        int area;
    public:
        Rectangle(int l,int b){
            this->length = l;
            this->breadth = b;
        }
        void getarea(){
            area = length * breadth;
        }
        void printarea(){
            cout<<"Rectangle area = "<<area<<endl;
        }

};

int main(){

    Circle c1(10);
    c1.getarea();
    c1.printarea();
    Rectangle r1(10,15);
    r1.getarea();
    r1.printarea();
    return(0);
}