#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, reverse = 0, n;
    
    cout<<"Enter a number: ";
    cin>>num;

    while (num != 0)
    {
        /*rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10; */
        n = num % 10;
        reverse = reverse * 10 + n;
        num /= 10;
    }

    
    cout<<"--------------------------------------------------------------------------"<<endl<<endl;
    cout << "The reversed number is " << reverse << endl;

    return 0;
}
