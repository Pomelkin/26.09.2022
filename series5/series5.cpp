#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double c, s, a;
    int n;
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        a = (rand()%100)/10.0;
        cout << "\n" << a;
        a = modf(a, &c);
        cout<<"\n" << c;
        s = s + c;
    }
    cout << "\n" << s;
    return 0;
}