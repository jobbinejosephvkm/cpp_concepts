#include<iostream>
#include<algorithm>
#include<array>
int main(){
    std::cout<<"Array STL"<<std::endl;
    std::array<int,5> arr{1,2,3,4,5};
    std::cout<<arr.size()<<std::endl;
    //auto it = arr.begin();
    for(auto x : arr){
        std::cout<<x;
    }


    return(0);
}