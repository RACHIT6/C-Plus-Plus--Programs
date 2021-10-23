#include <iostream>
using namespace std;

int prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n1 = 1, n2 = 29;
    for (int i = n1; i <= n2; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
