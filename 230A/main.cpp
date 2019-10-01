#include <iostream>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int dragons[2][n];
    for (int i=0; i<n; i++)
    {
        cin >> dragons[0][i];
        cin >> dragons[1][i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            if (dragons[0][i]>dragons[0][j])
            {
                swap (dragons[0][i], dragons[0][j]);
                swap (dragons[1][i], dragons[1][j]);
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if (s>dragons[0][i])
        {
            s+=dragons[1][i];

        }
        else
        {
          cout << "NO";
          return 0;
        }
    }
    cout <<"YES";
    return 0;
}
