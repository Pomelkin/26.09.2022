#include <iostream>
using  namespace std;

int main()
{
    int n;
    bool b;
    cin >> n;
    b = 0;
    while (n > 0)
    {
        if ((n % 10 / 2) != 1)
        {
            b = 1;
            break;
        }
        n = n / 10;
    }
    cout << b;
}
