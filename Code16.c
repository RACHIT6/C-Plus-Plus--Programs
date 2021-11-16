#include <stdio.h>
#include <math.h>

int fact(int var)
{
    int fact = 1;

    for (int i = 1; i <= var; i++)
    {
        fact *= i;
    }

    return fact;
}

int main(int argc, char const *argv[])
{
    int n, var, temp = 1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    int num = n;

    while (num != 0)
    {
        var = num % 10;
        sum += fact(var);
        num /= 10;
    }

    // sum += temp;

    // printf("%d\n", sum);

    if (n == sum)
    {
        printf("Strong number\n");
    }

    else
    {
        printf("Not a Strong number\n");
    }

    return 0;
}