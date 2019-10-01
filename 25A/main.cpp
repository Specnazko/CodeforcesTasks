#include <iostream>

using namespace std;

int main()
{
    int n, even=0, odd=0, evenn, oddn;
    cin >> n;
    int N[n];
    for (int i=0; i<n; i++)
    {
        cin >> N[i];
        if (N[i]%2==0)
        {
            even++;
            evenn=i;
        }
        else
        {
            odd++;
            oddn=i;
        }
    }
    if (even>odd) cout << oddn+1;
    else cout << evenn+1;
    return 0;
}
