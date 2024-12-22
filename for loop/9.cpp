// Fibonacci Series: Write a C++ program that generates the Fibonacci series up to a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int n, f_num = 0, s_num = 1, sum;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n == 0 && n == 1)
        {
            cout << f_num << s_num << endl;
        }

        else
        {
            sum = f_num + s_num;
            f_num = s_num;
            s_num = sum;
            cout << sum << " ";
        }
    }
    return 0;
}