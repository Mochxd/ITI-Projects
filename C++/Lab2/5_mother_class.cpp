#include <iostream>
using namespace std;
// Mother class
class Mother {
public:
    void display() {
        cout << "I am the mother." << endl;
    }
};

// Daughter class inherited from Mother
class Daughter : public Mother {
public:
// The display() method for daughter 
    void display() {
        cout << "I am the daughter." << endl;
    }
};

int main() {

// Create an instance of the Daughter class
    Daughter myDaughter;

// Call the display() method on the Daughter instance
    myDaughter.display();
    return 0;
}