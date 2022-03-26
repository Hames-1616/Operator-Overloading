#include<iostream>
using namespace std;
class Equalmod
{
    int x,y;
    public:
    Equalmod()
    {
        x=0,y=0;
    }
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }

    int operator %=(Equalmod p)
    {
        x = x % p.x;
        y = y % p.y;
        return x,y;
    }
   
    void display()
    {
        cout<<x<<"  "<<y;

    }

};
int main()
{
    Equalmod e1,e2;
    e1.getdata();
    e2.getdata();
    e2%=e1;
    e2.display();
    
    
}