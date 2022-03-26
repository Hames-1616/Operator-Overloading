#include<iostream>
using namespace std;
class Equalm
{
    int x,y;
    public:
    Equalm()
    {
        x=0,y=0;
    }
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }

    int operator *=(Equalm p)
    {
        x = x * p.x;
        y = y * p.y;
        return x,y;
    }
   
    void display()
    {
        cout<<x<<"  "<<y;

    }

};
int main()
{
    Equalm e1,e2;
    e1.getdata();
    e2.getdata();
    e2*=e1;
    e2.display();
    
    
}