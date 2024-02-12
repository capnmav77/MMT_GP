#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Middle_Men{
    public: 
        void display()
        {
            cout<<"MiddleMen";
        }
};

class one_Cab_Drivers : public Middle_Men
{
    public: 
        void display(){
            cout<<"cab drivers";
        }
};

class two_Intermediate_travel_people : public Middle_Men
{
    public: 
        void display(){
            cout<<"intermediate travel people";
        }
};
class three_Travel_guides : public Middle_Men
{
    public: 
        void display(){
            cout<<"travel guides";
        }
};
class four_Delicacies : public Middle_Men
{
    public: 
        void display(){
            cout<<"snacks";
        }
};
