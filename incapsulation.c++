#include <iostream>

using namespace std;
// Name the class with capital letter and variabels with small letter
class Point{
    private:
        int x;
        int y;
    public:
        void setx(int px)
        {
            if(px > 100)
            {
                x=100;
            }else if(px < -100){
                x=-100;
            }
            else{
                x = px;
            }
            
        }
        void sety(int py)
        {
            y=py;
        }
        print()
        {
            cout<<"("<<x<<","<<y<<")"<< endl;
        }
};

int main(){
    Point p1;
    p1.setx(-130);
    p1.sety(10);
    p1.print();

}