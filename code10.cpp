#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, reverse = 0, n;

    cout<<"Enter The Number: ";
    cin>>num;
    
    int n1 = num;

    while (num != 0)
    {
        n = num % 10;
        reverse = reverse * 10 + n;
        num /= 10;
    }

    if (n1 == reverse)
    {
        cout<<"The number is a palindrome";
    }
    
    else
    {
        cout<<"The number is not a palindrome";
    }

    return 0;
}