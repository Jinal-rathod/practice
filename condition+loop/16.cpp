// Sum of Divisors of a Number: Write a program that calculates the sum of divisors of a number N, but only adds divisors that are 
// greater than 1 and less than N.

#include <iostream>
using namespace std;

int sumOfDivisors(int N) {
    int total = 0;

    // Loop through potential divisors greater than 1 and less than N
    for (int i = 2; i < N; ++i) {
        if (N % i == 0) { // Check if i is a divisor of N
            total += i;
        }
    }

    return total;
}

int main() {
    int N;

    cout << "Enter a number: ";
    cin >> N;

    // Ensure the input is valid
    if (N > 1) {
        cout << "The sum of divisors of " << N 
             << " (greater than 1 and less than " << N 
             << ") is: " << sumOfDivisors(N) << endl;
    } else {
        cout << "Please enter a number greater than 1." << endl;
    }

    return 0;
}
