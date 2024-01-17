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
    int get_real() {
         return real;
        }
    int get_imagine() {
        return imagine;
        }

// Setter functions
    void set_real(int r) {
        real = r;
        }
    void set_imagine(int i) {
        imagine = i;
        }

    Complex add(Complex& num) {
        return Complex( (real + num.real) , (imagine + num.imagine) );
    }

    Complex sub(Complex& num) {
        return Complex( (real - num.real) , (imagine - num.imagine) );
    }

// print the add or sub
    print(){
    cout << "Sum is : " << get_real() << " + " << get_imagine() << "i" << endl;
}
};

Complex add(Complex& num1, Complex& num2) {
    return Complex((num1.get_real() + num2.get_real()), (num1.get_imagine() + num2.get_imagine()) );
}

Complex sub(Complex& num1, Complex& num2) {
    return Complex( (num1.get_real() - num2.get_real()), (num1.get_imagine() - num2.get_imagine()) );
}

int main() {
    Complex num1(5, 6);
    Complex num2(2, 5);

    Complex sum = add(num1, num2);
    Complex difference = sub(num1, num2);
    
    sum.print();
    difference.print();
    
    return 0;
}
