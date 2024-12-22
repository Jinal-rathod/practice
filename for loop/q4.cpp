// Even Numbers from 1 to N: Write a C++ program that prints all even numbers between 1 and N using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
