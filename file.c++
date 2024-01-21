/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream in;
int x,y,z;
int sub;
in.open("d:\\data.txt");
if (!in)
cout << "can\'t open file data.txt"<<endl;
else
{
in >> x>>y>>z;
sub = x*y*z;
cout << "Sub of "<<x<<" and "<<y<< " and "<<z<<" = "<< sub;
in.close();
}
}*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    char ch;
    in.open("d:\\messages.txt");
    if (!in)
        cout << "can\'t open file messages.txt"<<endl;
    else
    {
        while (!in.eof())
    {
        in.get(ch);
        cout << ch;
    }
    in.close();
}
}