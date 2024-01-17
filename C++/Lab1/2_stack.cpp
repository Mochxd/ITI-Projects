#include <iostream>

using namespace std;
#define MAX 10
class Stack{
private:
    int data[MAX];
    int size;
    int top;
public:
// making constructors
    Stack(){
        size=MAX;
        top=-1;
    }

// get the number of stack
    Stack(int n){
        if(n>MAX){
            cout<<"Invalid Values! MAX Size is "<< MAX;
            size=MAX;
        }else{
            size=n;
            top=-1;
        }
    }

// push the value to stack
    void push(int val){
        if(!is_full()){
            top++;
            data[top]=val;
        }else{
            cout<<"Stack is full"<<endl;
        }
    }
// check if the stack is full
    bool is_full(){
        if(top == size-1){
            return true;
        }else{
            return false;
        }
    }
// check if the stack is empty
    bool is_empty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
// Returns the element on the top of the stack, but does not remove it
    int peek() {
        if (!is_empty()) {
            return data[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

// Returns the element on the top of the stack, removing it in the process
    int pop(){
        int val;
        if(!is_empty()){
            val = data[top];
            top--;
        }else{
            cout<<"No data to pop"<<endl;
            val =-1;
        }
        return val;
    }

// maaking print function to print results
    print(){
        for(int i=top; i>=0; i--){
            cout<<data[i]<<endl;
        }
    }
};

int main() {
    Stack s1;
    Stack s2(3);
    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    s2.print();
    cout << "top value of stack is ="<<s2.pop()<<endl;
    s2.print();

// Peek example
    cout << "Peek value of stack is = " << s2.peek() << endl;
    s2.push(40);
    s2.print();
    cout << "Top value of stack is = " << s2.pop() << endl;
    s2.print();

// Is_Empty example
    cout << "Is stack empty? " << (s2.is_empty() ? "Yes" : "No") << endl;
}