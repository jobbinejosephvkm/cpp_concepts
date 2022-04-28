#include<set>
#include<iostream>
using namespace std;

int main(){

    set<int> st;

    st.insert({10,20,30,40});

    for(int i = 0 ; i < 100 ; i++){
        st.insert(i%17);
    }

    for(set<int> :: iterator it = st.begin() ; it!= st.end();it++ ){

        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto it :st){

        cout<<it<<" ";
    }
    return(0);
}