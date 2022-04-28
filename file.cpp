#include<ios>
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char arr[100];
    char arr1[100];
    cin.getline(arr,100);

    ofstream myfile("job.txt");

    myfile<<arr;
    
    myfile.close();

    ifstream myfile1("job.txt");
    
    myfile1.getline(arr1,100);

    myfile1.close();
    cout<<"file content is "<<"\""<<arr1<<"\""<<endl;
    return(0);

}