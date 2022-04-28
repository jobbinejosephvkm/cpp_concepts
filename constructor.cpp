#include<iostream>
using namespace std;
class Car{
    private:
        string name;
        int mileage;
        int price;
        string model;
    public:
        Car(){
            //cout<<"Default constructor called"<<endl;
        }
        Car(string name, string model , int mileage , int price){
            //cout<<"Parameterised Constructor called"<<endl;
            this->name = name;
            this->model = model;
            this->mileage = mileage;
            this->price = price;
        }
        Car(Car &obj){
            //cout<<"copy Constructor called"<<endl;
            this->name = obj.name;
            this->model = obj.model;
            this->mileage = obj.mileage;
            this->price = obj.price;
          
        }
        ~Car(){
            cout<<"Destructor called  : "<<this->model<<endl;
        }        
        void setdata(){
            name = "Toyota";
            mileage = 18;
            price = 1200000;
            model = "Yaris";
        }
        void printdata(){
            cout<<"___________________________"<<endl<<endl;
            cout<<"Name :"<< name<<endl;
            cout<<"Model :"<< model<<endl;
            cout<<"Mileage :"<< mileage<<endl;
            cout<<"Price :"<< price<<endl;
            cout<<"___________________________"<<endl;
        }

};

int main(){
    //cout<<"Main"<<endl;
    //Car ca;
    Car etios1("Toyota","etios1",22,900000);
    Car etios2("Toyota","etios2",22,900000);
    Car etios3("Toyota","etios3",22,900000);
    Car etios4("Toyota","etios4",22,900000);
    
}

