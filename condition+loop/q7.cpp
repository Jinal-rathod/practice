// Reverse a Number: Write a program that reverses a given number using a while loop, and prints whether the reversed number is the same as
// the original (palindrome check).

#include <iostream>
using namespace std;

int main()
{
    int num, rvs = 0;
    cin >> num;
    while (num)
    {
        rvs = rvs * 10 + num % 10;
        num /= 10;
    }
    cout << rvs;
    return 0;
}