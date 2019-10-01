#include <iostream>

using namespace std;

int main()
{
    double n, sum=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        double temp;
        cin >> temp;
        sum+=temp;
    }
    cout << sum / n;
    return 0;
}
