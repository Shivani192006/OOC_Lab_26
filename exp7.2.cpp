#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class FourWheeler {
public:
    FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};

class Car : public Vehicle, public FourWheeler {
public:
    Car() { cout << "This 4 Wheeler Vehicle is a Car\n"; }
};

int main() {
    cout << "Name:Shivani Pradip Chavan\n";
    cout << "Roll No: 26\n";
    cout << "Division: S.Y.B CSE\n";

    Car obj;

    return 0; 
}

