/*
    Name: Tran Gia Kiet 
    ID Student: 24110103
    Homework from real-world requirements to classes and objects 
*/

#include <iostream>
#include <vector>
#include <string.h>
using namespace std; 

//This is the class that represents type, maxspeed, fueltype ...
//Encapsulation: include attributes data and methods into 1 class
class Vehicles{
private: 
    string type; 
    string brandName;
    string registrationNumber;
    int modelYear; 
    float weight; 
    string color;
    int maxSpeed;
    string fuelType;
public: 

    //This is the constructor to initialize type, maxspeed, fueltype...
    Vehicles() {

    }

    Vehicles(string type, string brandName, string registrationNumber, int modelYear, float weight, string color, int maxSpeed, string fuelType)
    {
        this -> type = type; 
        this -> brandName = brandName;
        this -> registrationNumber = registrationNumber; 
        this -> modelYear = modelYear; 
        this -> weight = weight; 
        this -> color = color; 
        this -> maxSpeed = maxSpeed; 
        this -> fuelType = fuelType;
    }

    //The behaviour of accelerating
    void accelerate()
    {
        cout<<"The "<<type<<" is accelerating to "<<maxSpeed<<"km/h "<<endl;
    }
    
    //Display all the information of objects
    void displayInfo()
    {
        cout<<"type: "<<type<<" brand name: "<<brandName<<endl; 
        cout<<"registration number: "<<registrationNumber<<endl;
        cout<<"model year: "<<modelYear<<endl; 
        cout<<"weight: "<<weight<<" kg"<<endl;
        cout<<"color: "<<color<<endl; 
        cout<<"the maxspeed: "<<maxSpeed<<" km/h"<<endl; 
        cout<<"fuel type: "<<fuelType<<endl;
    }

};

int main()
{
    //use freopen to take input from file and read output
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w", stdout);
    int n;
    string type; 
    string brandName;
    string registrationNumber;
    int modelYear; 
    float weight; 
    string color;
    int maxSpeed;
    string fuelType;

    Vehicles v ("Car", "Honda", "HN123ABC", 2015, 1100, "Black", 170,"Petrol");
    Vehicles s ("Truck", "Isuzu", "ISZ567XYZ", 2019, 6000, "Yellow", 110, "Diesel");
    Vehicles h("Truck","Man", "NB2389", 2025, 4000, "Yellow", 120, "Petrol");

    v.accelerate(); 
    v.displayInfo(); 
    cout<<endl; 

    s.accelerate();
    s.displayInfo();
    cout<<endl; 

    h.accelerate();
    h.displayInfo();
    cout<<endl;


    cout<<"Input number of vehicles: ";
    cin>>n; 
    cout<<n;
    cin.ignore(256,'\n');
    cout<<endl;
    
    vector<Vehicles>vehicle; 
    for (int i = 0; i<n; i++)
    {
        getline(cin, type); 
        getline(cin, brandName);
        getline(cin, registrationNumber);
        cin>>modelYear;
        cin.ignore(256,'\n');
        cin>>weight; 
        cin>>color; 
        cin>>maxSpeed; 
        cin.ignore(256,'\n');
        getline(cin, fuelType);
       
        Vehicles t (type,brandName,registrationNumber,
        modelYear, weight, color,
         maxSpeed, fuelType);
        vehicle.push_back(t);
        
    }

    for (auto x : vehicle)
    {
        x.accelerate();
        x.displayInfo();
        cout<<endl;
    }
}

/*
Test cases for input 
3
Car
Toyota
VN1234ABC
2018
1200
Red
180
Petrol
Truck
Volvo
TRK5678XYZ
2020
7500
Blue
120
Diesel
Van
Mercedes
VAN2468LMN
2022
2500
White
160
Electric
*/
