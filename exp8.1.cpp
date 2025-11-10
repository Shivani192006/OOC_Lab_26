#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        this->feet = f;   
        this->inch = i;
    }

    void operator-() {
        feet--;
        inch--;
        cout << "\nFeet & Inches (After Decrement): "  << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    cout << "Name: Shivani Pradip Chavan" << endl;
    cout << "Roll No: 26" << endl;
    cout << "Division: S.Y.B CSE" << endl;

    Distance d1(8, 9);
    -d1;  

    return 0;
}


