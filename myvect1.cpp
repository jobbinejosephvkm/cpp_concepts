#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector<vector<int>> vec( 5 , vector<int> (4, 0));
 
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            vec.at(i).at(j)  = i*2 + j;
        }
        //cout<< endl;
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<vec.at(i).at(j)<<" ";
        }
        cout<< endl;
    }
     
    return 0;
}