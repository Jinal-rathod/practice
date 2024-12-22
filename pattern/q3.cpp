// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int r = 1; r <= i; r++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int s = 5; s > i; s--)
        {
            cout << "    ";
        }
        for (int r = 2; r <= i+1; r++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}