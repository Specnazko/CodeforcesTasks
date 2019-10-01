#include <iostream>

using namespace std;

int main()
{
    int n, h, d=0;
    cin >> n >> h;
    for (int i=0, a; i<n; i++)
    {   cin >> a;
        if (a<=h) d++;
        else d+=2;
    }
    cout << d;

    return 0;
}
