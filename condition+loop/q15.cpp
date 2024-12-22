// Generate Fibonacci Sequence: Write a program that generates the Fibonacci sequence up to N terms and prints only the even Fibonacci num.

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, n, next;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "0" << " ";
        }
        else if (i == 1)
        {
            cout << "1" << " ";
        }
        else
        {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
}