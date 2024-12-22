// Print a Pattern (Right Triangle of Stars): Write a program that prints a right triangle of stars (*) up to N rows, but only prints
// stars in odd rows using a for loop and if condition.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}