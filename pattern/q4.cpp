// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = n - 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            c++;
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}