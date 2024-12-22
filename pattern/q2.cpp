// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

void u()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = i; j >= 2; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void d()
{
    for (int i = 2; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = i; j >= 2; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    u();
    d();
    return 0;
}