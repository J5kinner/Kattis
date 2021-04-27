#include <iostream>
using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    // if divisible by x
    for (int i = 1; i <= n; i++)
    {
        bool chk = false;
        if (i % x == 0)
        {
            chk = true;
            cout << "Fizz";
        }
        if (i % y == 0)
        {
            chk = true;
            cout << "Buzz";
        }
        if (!chk)
        {
            cout << i;
        }

        cout << '\n';
    }
}