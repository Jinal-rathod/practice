// A 
// B C 
// C D E 
// D E F G 
// E F G H I

#include <iostream>
using namespace std;

void loop(char n)
{
    for (char i = 'A'; i <= n; i++)
    {
        char count = i - 1;
        for (char j = 'A'; j <= i; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }
}
int main()
{
    char num;
    cin >> num;
    loop(num);
    return 0;
}