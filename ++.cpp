#include<iostream>
using namespace std;
class counter
{
    int count;
    public:
    counter()
    {
        count = 0;
    }

    int getcount()
    {
        return count;
    }
    void operator ++()
    {
        ++count;
    }
    void operator ++(int)
    {
        count++;
    }
};

int main()
{
    counter c1;
    ++c1;
    cout<<c1.getcount();
    cout<<endl;
    ++c1;
    cout<<c1.getcount();
    cout<<endl;
    c1++;
    cout<<c1.getcount();
}
