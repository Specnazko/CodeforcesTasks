#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int N[n];
    N[0]=1;
    for (int i=1; i<n; i++)
    {
        cin >> N[i];
    }
    for (int i=1; i<=t;)
    {
        if (i==t)
        {
            cout << "YES";
            return 0;
        }
        else i+=N[i];


    }
    cout << "NO";
    return 0;
}
