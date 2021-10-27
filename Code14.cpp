#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num, arm = 0;
    cout << "Enter the Number: ";
    cin >> n;

    int temp = n;

    while (n != 0)
    {
        num = n % 10;
        arm += num * num * num;
        n /= 10;
    }

    if (temp == arm)
    {
        cout << "Armstrong Number";
    }

    else
    {
        cout << "Not an Armstrong Number";
    }
    return 0;
}