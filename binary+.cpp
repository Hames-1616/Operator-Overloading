#include<iostream>
using namespace std;
class Plus
{
    int x,y;
    public :
    Plus()
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
    Plus operator +(Plus s)
    {
        Plus p;
        p.x = x + s.x;
        p.y = y + s.y;
        return p;
    }
};
int main()
{
    Plus p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p3 = p1 + p2;
    p3.display();

}