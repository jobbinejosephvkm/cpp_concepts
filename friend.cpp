#include<iostream>
using namespace std;
class abc{
    private:
        int a;
        int b;
    public:
        abc(){
            a = 0;
            b = 0;
        }
        abc(int a , int b){
            this->a = a;
            this->b = b;
        }
    friend void printdata(abc);
};

void printdata(abc obj){
    cout<<"DATA :"<<obj.a<<"------"<<obj.b<<endl;
}
int main(){

    abc obj;
    abc obj1(10,15);
    printdata(obj1);
    return (0);
}