#include<iostream>
using namespace std;
class And
{
    int x;
    public:
    And()
    {
        x=0;
    }
    void getdata()
    {
        cout<<"Enter data ";
        cin>>x;
    }
    And operator >>(And a)
    {
       And t;
       t.x = (x>>a.x);
       return t;

    }
    void display()
    {
        cout<<x;
    }
};
int main()
{
    And a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3 = a1 >> a2;
    a3.display();
}