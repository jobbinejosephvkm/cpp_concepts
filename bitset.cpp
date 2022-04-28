#include<bitset>
#include<iostream>
using namespace std;

int main(){

    bitset<4> bs("0011");

    bitset<4> bs1("0101");
    //string s1 = bs.to_string();

    unsigned long x = bs.to_ullong();

    //cout<<s1<<endl;

    //cout<<x<<endl;

    bs = bs ^ bs1;
       
    cout<<bs<<endl;

    return (0);
}