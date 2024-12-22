//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 4; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}