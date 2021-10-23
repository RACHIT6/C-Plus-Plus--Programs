#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 321, reverse = 0, n;

    while (num != 0)
    {
        /*rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10; */
        n = num % 10;
        reverse = reverse * 10 + n;
        num /= 10;
    }

    cout << "The reversed number is " << reverse << endl;

    return 0;
}
