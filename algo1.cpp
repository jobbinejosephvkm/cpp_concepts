#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

bool isEven(int val){
    if(val%2 == 0 ){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    vector<int> v1 ={10,20,20,20,30,17,40};

    cout<<count(v1.begin(),v1.end(),20)<<endl;

    cout<<count_if(v1.begin(),v1.end(),isEven);


    return(0);
}