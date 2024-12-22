// counting Even and Odd Numbers: Write a C++ program that counts the number of even and odd numbers in a given range using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int num, count1 = 0, count2 = 0;
    cin >> num;
    for (int i = 1; i <= num; i += 2)
    {
        count1++;
    }
    for (int i = 2; i <= num; i += 2)
    {
        count2++;
    }
    cout << "Total even number : " << count2 << endl;
    cout << "Total odd number : " << count1 << endl;
    return 0;
}