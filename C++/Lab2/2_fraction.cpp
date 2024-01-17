#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
// Constructor
    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0) {
            cout << "Error: Denominator cannot be zero." << endl;
            exit(1);
        }
        simplify();
    }

// Function to simplify the fraction
    void simplify() {
        int gcd = calculate_gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

// Function to calculate the greatest common divisor (GCD)
    int calculate_gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

// Overload addition operator
    Fraction operator+(Fraction &other) {
        int result_num = (numerator * other.denominator) + (other.numerator * denominator);
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

// Overload subtraction operator
    Fraction operator-(Fraction &other){
        int result_num = (numerator * other.denominator) - (other.numerator * denominator);
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

// Overload multiplication operator
    Fraction operator*(Fraction &other){
        int result_num = numerator * other.numerator;
        int result_den = denominator * other.denominator;
        return Fraction(result_num, result_den);
    }

// Overload division operator
    Fraction operator/(Fraction &other){
        if (other.numerator == 0) {
            cout << "Error: Division by zero." << endl;
            exit(1);
        }

        int result_num = numerator * other.denominator;
        int result_den = denominator * other.numerator;
        return Fraction(result_num, result_den);
    }

// Overload output stream operator
    friend ostream &operator<<(ostream &cout, Fraction &fraction) {
        cout << fraction.numerator << "/" << fraction.denominator;
        return cout;
    }
};

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction multiplication = fraction1 * fraction2;
    Fraction division = fraction1 / fraction2;

    cout << "Fraction 1: " << fraction1 << endl;
    cout << "Fraction 2: " << fraction2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "multiplication: " << multiplication << endl;
    cout << "division: " << division << endl;

    return 0;
}
