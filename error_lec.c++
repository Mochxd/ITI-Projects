#include <iostream>
using namespace std;
int main(){
    int x,y;
    float res;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter Second number: ";
    cin>>y;
    try{
    if(y == 0){ 
        throw 10;
    }
    res=x/(float)y;
    cout<<"Division = "<<res<<endl;
    }
    catch(int y){
        if(y == 10){
            cout<<"Division = "<<res<<endl;
        }
    }
    return 0;
}