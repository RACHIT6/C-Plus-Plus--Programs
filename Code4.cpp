#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter The Number: ";
    cin>>a;
    for (int i = 1; i <= 10; i++)
    {
        cout<<a<<" x "<<i<<setw(4)<<" = "<<setw(2)<<a*i<<endl;
    }

    return 0;
}