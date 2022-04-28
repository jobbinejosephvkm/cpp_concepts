#include<iostream>
using  namespace std;
class base{
    private:
        int area;
    public:
        base(){
            area = 0;
        }
        void setarea(int area){
            this->area = area;
        }
        int getarea(){
            return(area);
        }
};


class circle : public base {
    private:
        int radius;
    public:
        circle(){
            radius = 0;
        }
        circle(int radius){
            this->radius = radius;
        }

        void calculatearea(){
            setarea(3.14 * radius * radius);
        }
        void printarea(){
            cout<<"Circle Area = "<<getarea()<<endl;
        }
};


class rectangle : public base {
    private:
        int length;
        int breadth;
    public:
        rectangle(){
            length = 0;
            breadth = 0;
        }
        rectangle(int l , int b){
            this->length = l;
            this->breadth = b;
        }

        void calculatearea(){
            setarea(length * breadth);
        }
        void printarea(){
            cout<<"Rectangle Area = "<<getarea()<<endl;
        }
};


int main(){
    //circle c1(5);
    //c1.calculatearea();
    //c1.printarea();
    rectangle r1(5,4);
   // r1.calculatearea();
    r1.printarea();

    return(0);
}