#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
using namespace std;
class compare{
    bool operator()(vector<int> v1, vector<int> v2){
        
        return (sqrt(v1[0]*v1[0] + v1[1]*v1[1]) <  sqrt(v1[0]*v1[0] + v1[1]*v1[1]) );
        
    }
    
};

void push(priority_queue<vector<int>, vector<vector<int>>, compare > &pq, vector<int> point , int k ){
    
    if(pq.size() <= k){
        //pq.push(point);
    }
    
    
}
main()
{
        vector<vector<int>>& points(0);
        int k;
        
        priority_queue<vector<int>, vector<vector<int>>, compare > pq;
        for(int i = 0 ; i< points.size() ; i++){
            
            push(pq,points[i],k);
            
     
        }
        
        
        return(0);
}

