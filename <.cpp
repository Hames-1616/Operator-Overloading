#include<iostream>
using namespace std;
class big
{
    int x,y;
    public:
    big()
    {
        x=0,y=0;

    }
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    bool operator > (big p)
    {
        if(x>p.x && y>p.y)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

int main()
{
    big b1,b2;
    b1.getdata();
    b2.getdata();
    if(b1>b2)
    {
        cout<<"b1 is greater"<<endl;
    }
    else 
    {
        cout<<"b2 is greater"<<endl;
    }
}