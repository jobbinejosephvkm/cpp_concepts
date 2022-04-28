#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 2;
    int c=0;
    try{
        if(b==0){
            throw b;
        }
         c = a/b;
    }
    catch(int ex){

        cout<<"Exception : Divide by zero "<<b<<endl;
    }

    cout<<"result = "<<c<<endl;

    return (0);
}