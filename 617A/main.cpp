#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, n;
    cin >> x;
    n= ceil (x/5);
    if (x%5!=0)n++;
    cout << n;
    return 0;
}
