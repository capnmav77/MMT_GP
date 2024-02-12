#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Service_Providers
{
    public:
    void view(){
        cout<<"service Providers view";
    }
};

class one_Hotel_managers : public Service_Providers{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
    void viewnow(){
        cout<<"inside managers";
        view();
    }
};

class two_Flight_Company : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};

class three_Bus_Companies : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};

class four_Travel_Agencies : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};

class five_Trains_Agencies : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};

class six_Homestays_and_Villas : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};

class seven_Holiday_Managers : public Service_Providers
{
    public: 
    void display(){
        cout<<"Hotel Manager";
    }
};
