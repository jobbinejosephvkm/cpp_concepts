#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq;

    for(int i=0 ; i <15  ; i++){
        pq.push(i);
    }


    while(!pq.empty()){

        cout<<pq.top()<<" ";
        pq.pop();
    }

    return(0);
}