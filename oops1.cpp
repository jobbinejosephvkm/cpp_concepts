#include<iostream>
using namespace std;
class Car{
    private:
        string name;
        int mileage;
        int price;
        string model;
    public:
        
        void setdata(){
            name = "Toyota";
            mileage = 18;
            price = 1200000;
            model = "Yaris";
        }
        void printdata(){
            cout<<"Name :"<< name<<endl;
            cout<<"Model :"<< model<<endl;
            cout<<"Mileage :"<< mileage<<endl;
            cout<<"Price :"<< price<<endl;
        }
};

int main(){
    //cout<<"Main"<<endl;
    Car ca;
    ca.setdata();
    ca.printdata();

}

