#include<deque>
#include<iostream>
using namespace std;

int main(){

    deque<string> words;

    words.push_back("Hello");
    words.push_back("how");
    words.push_back("are");

    for(int i =0; i<words.size();i++){

        cout<<words.at(i)<<endl;

    }

    return (0);
}