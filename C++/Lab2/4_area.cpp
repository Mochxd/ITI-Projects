#include<iostream>
using namespace std;
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() {
        return 0;
    }
};

// Area of a triangle
class Triangle : public Shape {
public:
    Triangle(int base, int height) : Shape(base, height) {}
    double area() override {
        return 0.5 * width * height; 
    }
};

// Area of a rectangle
class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : Shape(width, height) {}
    double area() override {
        return width * height; 
    }
};

int main() {
// check the Area of triangle 
    Triangle triangle(8, 6);
    
// check the Area of rectanguler
    Rectangle rectangle(3, 6);

// print the area of the triangle
    cout << "Area of the triangle: " << triangle.area() << endl;

// print the area of the rectangle
    cout << "Area of the rectangle: " << rectangle.area() << endl;
    return 0;
}
