# Name : Tran Gia Kiet 
# ID Student: 24110103
# Date update: 4/9/25

# Vehicle Management Program (C++ OOP)

## 📌 Introduction
This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++ through the implementation of a `Vehicles` class.  
The class models real-world vehicles with attributes (e.g., type, brand name, model year,....) and behaviors (methods like `accelerate()` and `displayInfo()`).  
This programe also helps vehicle distributors and client to reference about the typical of some vehicles, and help them easily to make a decision in choosing a vehicle
The program also shows how to:
- Encapsulate data in a class with private attributes and public methods.  
- Initialize objects using constructors.  
- Use file input/output (`input.txt`, `output.txt`) for testing.  

---

## 🛠️ Build & Run Instructions
### Compile
```bash
g++ Vehicles.cpp -o Vehicles

```bash
./Vehicles

## Input format
There are three examples are available in main functions
Afterthat user will input some information
First line: number of vehicles n
For each vehicle, input the following (each on a new line):
type
brandName
registrationNumber
modelYear
weight
color
maxSpeed
fuelType

## Example input(input.txt)
2
Car
Honda
HN123ABC
2015
1100
Black
170
Petrol
Truck
Isuzu
ISZ567XYZ
2019
6000
Yellow
110
Diesel

## Example Output
The Car is accelerating to 170 km/h
type: Car brand name: Honda
registration number: HN123ABC
model year: 2015
weight: 1100 kg
color: Black
the maxspeed: 170 km/h
fuel type: Petrol

The Truck is accelerating to 110 km/h
type: Truck brand name: Isuzu
registration number: ISZ567XYZ
model year: 2019
weight: 6000 kg
color: Yellow
the maxspeed: 110 km/h
fuel type: Diesel

## Reflection
When analyzing the requirements, I first identified the main entity: a Vehicles class that models real-world vehicles. The class encapsulates attributes such as type, brand name, registration number, model year, weight, color, max speed, and fuel type. To implement behaviors, I added methods like accelerate() and displayInfo() to make information are more various, and provide to client more more useful information to help them make a good decision.

During development, one challenge was handling input/output properly, especially when mixing cin and getline. I solved this by carefully using cin.ignore() to avoid issues with newline characters. Another challenge was ensuring that the code followed OOP principles while still being simple and readable.
Another problem is a lot of information to input, so I use input.txt to help vehicle distributors save time to input information, and also have some examples to reference.
Using OOP concepts helped a lot:
Encapsulation allowed me to hide the internal representation of the vehicle while exposing meaningful methods.
Abstraction helped me focus on what a vehicle does rather than how the details are stored.
Constructors simplified object creation by initializing all attributes at once.
This project demonstrated how OOP makes code organized, reusable, and extendable. For example, adding a new attribute (e.g., fuelType) or behavior (displayInfo) required only small changes to the class, without breaking the rest of the code. Overall, OOP concepts provided a structured way to map real-world entities into C++ code.
