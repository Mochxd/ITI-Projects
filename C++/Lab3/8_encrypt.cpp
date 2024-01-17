#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){

    ifstream in;
    ofstream out;
    char ch;
    in.open(argv[1]);
    out.open(argv[2]);
    if(!in){
        cout<<"can't open the messge"<<endl;
    }else{
        while (!in.eof()){
            in.get(ch);
            ch = ~(int)ch;
            out<< ch;
        }
        in.close();
        out.close();
    }
    
    return 0;
}