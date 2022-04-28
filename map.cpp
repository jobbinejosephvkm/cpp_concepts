#include<iostream>
#include<map>

using namespace std;
int main(){
    map<string,int> person;

    person.insert({"jobbine Joseph", 38});
    person.insert({"Jordan Joseph Jobbine",6});
    person.insert({"Sajana Rachel Manuel",33});
    person.insert({"Melitta",5});
    person.insert({"Melissa",3});

    for(auto it : person){
        //pair<string,int> curr = it;
        cout<<it.first<<"----"<<it.second<<endl;

    }
    cout<<"__________________________________"<<endl;

    //person.erase(person.begin());
    for(auto it : person){

        if(it.second < 10) {
            cout<<it.first<<endl;
            person.erase("Sajana Rachel Manuel");
        }    
        

    }
    cout<<"__________________________________"<<endl;
    for(auto it : person){
        //pair<string,int> curr = it;
        
        cout<<it.first<<"----"<<it.second<<endl;

    }

    return(0);
}