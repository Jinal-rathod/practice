// Prime Numbers in a Range: Write a program that prints all prime numbers between two given numbers using a for loop and an if condition.

#include <iostream>
using namespace std;

bool isPrime(int num)
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
    cout<<"Prime number : ";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}