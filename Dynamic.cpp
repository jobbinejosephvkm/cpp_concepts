#include<iostream>
using namespace std;
int main(){
    int size=5;
    int *ptr;
    //cout<<"Enter size :";
    //cin>>size;
    ptr = new int[size];

    for(int i = 0 ; i < size ; i++){

        ptr[i] = i*10+1;
    }
    //delete ptr;
    for(int i = 0 ; i < size ; i++){

        cout<<"In Location "<<&ptr[i]<<"  value assigned "<<ptr[i]<<endl;
    }

    return(0);
}