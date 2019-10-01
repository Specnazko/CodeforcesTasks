#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    double max, maxtemp=0;
    cin >> n >> l;
    int N[n];
    for (int i=0; i<n; i++)
    {
        cin >> N[i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            if (N[i]>N[j]) swap (N[i], N[j]);
        }
    }

    if (N[0]-0>=l-N[n-1]) max=N[0]-0;
    else max=l-N[n-1];

    for (int i=0; i<n; i++)
    {
        double temp=0;
        temp = ((double)(N[i]-N[i-1]))/2;
        if (temp > maxtemp) maxtemp = temp;
    }
    cout << setprecision(9) << fixed;
    if (maxtemp > max) cout << maxtemp;
    else cout << max;

    return 0;
}
