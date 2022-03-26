#include<iostream>
using namespace std;
class Equalp
{
    int x,y;
    public:
    Equalp()
    {
        x=0,y=0;
    }
 
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
   /* Equalp& operator +=(Equalp& s)   // using this keyword,refernce for overloading  
    {
        this->x = (this->x + s.x);
        this->y = (this->y + s.y);
        return *this;
    }*/
    int operator +=(Equalp p)
    {
        x = x + p.x;
        y = y + p.y;
        return x,y;
    }
   
    void display()
    {
        cout<<x<<"  "<<y;

    }

};
int main()
{
    Equalp e1,e2;
    e1.getdata();
    e2.getdata();
    e2+=e1;
    e2.display();
    
    
}