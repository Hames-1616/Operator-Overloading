#include<iostream>
using namespace std;
class Div
{
    float x,y;
    public:
    Div()
    {
        x=0,y=0;
    }
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x = "<<x<<"   y = "<<y;
    }

    Div operator / (Div d)
    {
        Div t;
        t.x = x / d.x;
        t.y = y / d.y;
        return t;
    }
};

int main()
{
    Div d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3 = d1/ d2;
    d3.display();
}