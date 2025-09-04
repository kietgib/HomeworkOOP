# Vehicle Management Program (C++ OOP)

### 👤 Author
- **Name**: Tran Gia Kiet  
- **Student ID**: 24110103  
- **Last Update**: 04/09/2025  

---

## 📌 Introduction
This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++ through the implementation of a `Vehicles` class.  

The class models real-world vehicles with attributes (e.g., type, brand name, model year, etc.) and behaviors (methods like `accelerate()` and `displayInfo()`).  

This program helps **vehicle distributors and clients** to:
- Reference the typical attributes of vehicles.  
- Make better decisions when choosing a vehicle.  

It also shows how to:
- Encapsulate data in a class with private attributes and public methods.  
- Initialize objects using constructors.  
- Use file input/output (`input.txt`, `output.txt`) for testing.  

---

## ⚙️ Build & Run Instructions

### Compile
```bash
g++ Vehicles.cpp -o Vehicles
```

### Run
```bash
./Vehicles
```

---

## 📥 Input Format
- There are three built-in examples in `main()`.  
- After that, the user can input additional vehicles.  

**Format:**
1. First line: number of vehicles `n`  
2. For each vehicle, input the following (each on a new line):  
   - type  
   - brandName  
   - registrationNumber  
   - modelYear  
   - weight  
   - color  
   - maxSpeed  
   - fuelType  

---

## 📝 Example Input (`input.txt`)
```
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
```

---

## 📤 Example Output
```
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
```

---

## 💡 Reflection
When analyzing the requirements, I first identified the main entity: a `Vehicles` class that models real-world vehicles. The class encapsulates attributes such as type, brand name, registration number, model year, weight, color, max speed, and fuel type.  

To implement behaviors, I added methods like `accelerate()` and `displayInfo()` to provide clients with useful information to support decision-making.  

**Challenges faced:**
- Handling input/output properly, especially when mixing `cin` and `getline`. I solved this by using `cin.ignore()` to avoid newline issues.  
- Managing a large amount of input data. To solve this, I used `input.txt` to make data entry faster and provide reusable examples.  

**How OOP helped:**
- **Encapsulation**: Hid the internal representation while exposing meaningful methods.  
- **Abstraction**: Focused on what a vehicle does instead of how details are stored.  
- **Constructors**: Simplified object creation by initializing attributes at once.  

This project shows how OOP makes code **organized, reusable, and extendable**. Adding a new attribute or method required minimal changes without breaking existing functionality.  

---
