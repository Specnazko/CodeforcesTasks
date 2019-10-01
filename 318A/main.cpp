#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int n, k, m, j, i;
    cin >> n >> k;
    if (n%2==0) m=n/2;
    else m=n/2+1;
    if (k<=m)
    {       j=1, i=1;
            for (; i<k; i++, j+=2)
            {
            }
            cout<<j;
            return 0;
    }
    else
    {
            k-=m;
            j=2, i=1;
            for (; i<k; i++, j+=2)
            {
            }
            cout<<j;
            return 0;
    }

    return 0;
}
