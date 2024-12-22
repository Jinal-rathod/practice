// Sum of Even Numbers: Write a C++ program that calculates the sum of all even numbers between 1 and n using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    cout << "Sum of even number : " << sum;
    return 0;
}