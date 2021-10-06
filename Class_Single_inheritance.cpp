#include <iostream>
using namespace std;

class base
{
    int n1;

public:
    int n2;
    base()
    {
        n1 = 100;
        n2 = 10;
    };
    void getdata()
    {
        cout << "The base class element is " << n1 << " and " << n2 << endl;
    }
};

class derived : public base
{
public:
    int n3;
    void getdata1()
    {
        cout<<"Taken from base class "<<n2<<endl;
    }
};

int main(int argc, char const *argv[])
{
    derived d1;
    d1.getdata1();

    return 0;
}