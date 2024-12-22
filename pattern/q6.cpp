//         *
//       *   *
//     *       *
//   *           *
// *               *
//   *           *
//     *       *
//       *   *
//         *

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
            if (j == 1)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = i; j >= 2; j--)
        {
            if (j == 2)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
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
            if (j == 2)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = i; j >= 2; j--)
        {
            if (j == 3)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    d();
    u();
    return 0;
}