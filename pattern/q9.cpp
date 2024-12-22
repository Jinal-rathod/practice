//         1 
//       2 3 
//     3 4 5 
//   4 5 6 7
// 5 6 7 8 9

#include <iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        int count = i-1;
        for (int s = 5; s > i; s--)
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