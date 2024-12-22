// Reverse a Number: Write a C++ program that reverses a given number using a while loop.

#include <iostream>
using namespace std;

int main() {
    int num, r_num = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = num; i != 0; i /= 10) {
        int digit = i % 10;          // Extract the last digit
        r_num = r_num * 10 + digit; // Build the reversed number
    }

    cout << "Reversed Number: " << r_num << endl;

    return 0;
}
