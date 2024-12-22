// Count Positive and Negative Numbers in an Array: Write a program that counts the number of positive and negative numbers in an array
// using a for loop with if conditions.

#include <iostream>
using namespace std;

void neg_ele(int arr[], int size)
{
    cout << "Negative elements in the array are: ";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i];
        }
    }
    printf("\n");
}

int main()
{
    int size;
    cin >> size;
    cout << "Enter the size of the array: ";

    int arr[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    neg_ele(arr, size);

    return 0;
}
