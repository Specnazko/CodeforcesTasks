#include <iostream>

using namespace std;

int main()
{
    int n, h=0;
    cin >> n;
    int com1[n];
    int com2[n];
    for (int i=0; i<n; i++)
    {
        cin >> com1[i] >> com2[i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (com1[i]==com2[j]) h++;
        }
    }
    cout << h;
    return 0;
}
