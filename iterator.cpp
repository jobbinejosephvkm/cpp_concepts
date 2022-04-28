#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main(){

    vector<int> myvect;
    //deque<int> myvect;
    //list<int> myvect;

    myvect.push_back(1);
    myvect.push_back(2);
    myvect.push_back(3);
    myvect.push_back(4);

    //vector<int> :: iterator it;


   // it = myvect.begin();

    for(auto it: myvect){
        cout<<it<<" ";
    }
    cout<<endl;

    myvect.erase(myvect.begin() , myvect.begin()+2);


    for(auto it: myvect){
        cout<<it<<" ";
    }

    //cout<<it[3]<<endl;
    //cout<<*it<<endl;
    /*
    for(it = myvect.begin();it != myvect.end(); it++ ) {

        cout<<*(it+2)<<endl;
    }*/

    //cout<<myvect.front()<<endl;



    return(0);
}