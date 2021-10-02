#include <iostream>
using namespace std;

int func1(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int func(int arr[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main(int argc, char const *argv[])
{
    int arr[] = {13, 5, 67, 78, 43, 2, 344, 543};
    int size = sizeof(arr) / sizeof(int);
    int var = func(arr, size);
    int temp = func1(arr, size);
    cout << "The Largest element of array is " << var << " and the smallest is " << temp;

    return 0;
}