#include <iostream>

using namespace std;

class Shape
{
private:
    int height;
    int width;
public:
    int mul()
    {
        int m;
        m = height * width;

        return m;
    }
    void sethei(int high)
    {
        height = high;
    }
    void setwid(int wid)
    {
        width = wid;
    }


};

class Triangle : public Shape
{
public:
    void trarea()
    {
        float a;

        a = 0.5 * mul();

        cout<<"Area of triangle = "<< a <<endl;
    }
};

class Rectangle : public Shape
{
public:
    void rearea()
    {
        int a;

        a = mul();

        cout<<"Area of triangle = "<< a <<endl;
    }
};

int main()
{

    Triangle t1;
    Rectangle r1;


    t1.sethei(10);
    t1.setwid(5);
    t1.trarea();

    r1.sethei(10);
    r1.setwid(5);
    r1.rearea();




    return 0;
}
