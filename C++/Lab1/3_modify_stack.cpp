#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imagine;

public:
// Constructors
    Complex() : real(0), imagine(0) {}
    Complex(int r, int i) : real(r), imagine(i) {}

// Getter functions
    int get_real() { return real; }
    int get_imagine() { return imagine; }

// Overloaded operators

// sum operator
    Complex operator+(Complex& other) {
        return Complex(real + other.real, imagine + other.imagine);
    }

// subtraction operator
    Complex operator-(Complex& other) {
        return Complex(real - other.real, imagine - other.imagine);
    }

// multiply operator
    Complex operator*(Complex& other) {
        return Complex(
            real * other.real - imagine * other.imagine,
            real * other.imagine + imagine * other.real
        );
    }

// division operator
    Complex operator/(Complex& other) {
        int denominator = other.real * other.real + other.imagine * other.imagine;
        if (denominator == 0) {
            cout << "Error: Division by zero" << endl;
            return Complex();
        }
        return Complex(
            (real * other.real + imagine * other.imagine) / denominator,
            (imagine * other.real - real * other.imagine) / denominator
        );
    }

// Overloaded equality operator
    bool operator==(Complex& other) {
        return (real == other.real) && (imagine == other.imagine);
    }

// Overloaded in-equality operator
    bool operator!=(Complex& other) {
        return !(*this == other);
    }

// Display function
    void display() {
        cout << real << " + " << imagine << "i" << endl;
    }
};

int main() {
// Example usage
    Complex a(4, 5);
    Complex b(1, -2);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex Multiply = a * b;
    Complex Division = a / b;

    cout << "a + b = ";
    sum.display();

    cout << "a - b = ";
    difference.display();

    cout << "a * b = ";
    Multiply.display();

    cout << "a / b = ";
    Division.display();

    cout << "Equality check: " << (a == b ? "Equal" : "Not Equal") << endl;
    return 0;
}