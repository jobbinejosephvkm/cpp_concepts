#include<iostream>
using namespace std;

void callbyvalue(int a,int b){

    a = a+2;
    b = b+4;
}

void callbyaddress(int *a,int *b){

    *a = *a+2;
    *b = *b+4;
}
void callbyreferance(int &a,int &b){

    a = a+2;
    b = b+4;
}
int main(){

    int a = 5;
    int b = 10;

    cout<<"Before A = "<<a<<" , B = "<<b<<endl;
    //callbyvalue(int a,int b);
    //callbyaddress(&a,&b);
    callbyreferance(a,b);
    cout<<"After A = "<<a<<" , B = "<<b<<endl;

    return(0);

}