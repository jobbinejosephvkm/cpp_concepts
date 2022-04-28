#include<iostream>
#include<queue>
using namespace std;
#define SIZE 3
class compare{
    public:
        bool operator()(int a , int b){
            return(a<b);
        }

};
void push(priority_queue<int , vector<int>,compare> &pq1, int data){

        if(pq1.size() < SIZE){
            pq1.push(data);            
        }
        else{
            if(pq1.top() > data){
                pq1.pop();
                pq1.push(data);
            }
            
        }

}

int main(){

    priority_queue<int,vector<int>,compare> pq;
    /*
    pq.push(10);
    pq.push(8);
    pq.push(18);
    pq.push(5);
    */

    push(pq,10);
    push(pq,8);
    push(pq,19);
    push(pq,20);
    push(pq,35);

    while(!pq.empty()){

        cout<<pq.top()<<" ";
        pq.pop();
    }

    return(0);
}