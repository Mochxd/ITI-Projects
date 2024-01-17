#include <iostream>

using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
// Making a Constructor 
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

// Member function to check if the triangle is equilateral
    bool is_equilateral(){
        return side1 == side2 && side2 == side3;
    }

// Member function to check if the triangle is isosceles
    bool is_isosceles(){
        return side1 == side2 ||side1 == side3|| side2 == side3;
    }

// Member function to check if the triangle is scalene
    bool is_scalene() {
        return !is_equilateral() && !is_isosceles();
    }
};

int main() {
// Define sides for triangle
    double side1, side2, side3;
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

// Create a Triangle object
    Triangle myTriangle(side1, side2, side3);

// print the type of the triangle
    if (myTriangle.is_equilateral()) {
        cout << "The triangle is equilateral.\n";
    } else if (myTriangle.is_isosceles()) {
        cout << "The triangle is isosceles.\n";
    } else if (myTriangle.is_scalene()) {
        cout << "The triangle is scalene.\n";
    }
    else{
        cout << "The triangle has 3 different sizes.\n";
    }
    return 0;
}
