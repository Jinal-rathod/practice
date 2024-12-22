// Prime Numbers up to N: Write a C++ program to print all prime numbers up to a given number N using a for loop.

#include <iostream>
using namespace std;

int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}