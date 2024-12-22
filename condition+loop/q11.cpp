// Check Leap Year: Write a program that checks if a given year is a leap year using an if statement inside a for loop .

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 || year % 100 == 0 && year % 400 != 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "normal year";
    }
    return 0;
}