#include<iostream>
using namespace std;
class Sub
{
    int x,y;
    public :
    Sub()
    {
        x=0;
        y=0;
    }
    void getdata()
    {
        cout<<"Enter x and y"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x = "<<x<<"   y = " <<y;
    }
    Sub operator -(Sub s)
    {
        Sub p;
        p.x = x - s.x;
        p.y = y - s.y;
        return p;
    }
};
int main()
{
    Sub p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p3 = p1 - p2;
    p3.display();

}