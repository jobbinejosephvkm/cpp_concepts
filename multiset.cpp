#include<set>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    multiset<int> st;

    st.insert({10,20,30,40});

    for(int i = 0 ; i < 35 ; i++){
        st.insert(i%17);
    }

    for(multiset<int> :: iterator it = st.begin() ; it!= st.end();it++ ){

        cout<<*it<<" ";
    }

    auto it = st.find(30);

    cout<<endl;

    cout<<*it<<endl;

    pair<multiset<int> :: iterator ,multiset<int> :: iterator > range = st.equal_range(12);

    st.erase(16);

    for(auto it :st){

        cout<<it<<" ";
    }
    return(0);
}