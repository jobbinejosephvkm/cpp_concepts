#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v1;
    for(int i = 0 ; i < 10 ; i++) {
        v1.push_back(i);
        cout<<i<<")"<<v1.size()<<" ---- ";
        cout<<v1.capacity()<<endl;
        
    }


    return(0);
}