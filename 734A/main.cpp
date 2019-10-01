#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a=0, d=0;
    cin >> n;
    string str;
    cin >> str;
    for (int i=0; i<n; i++)
    {
        if (str[i]=='A') {a++;}
        else {d++;}
    }
    if (a==d)
    {
        cout << "Friendship";
    }
        else if (a>d)
        {
        cout << "Anton";
        }
        else
        {
        cout<< "Danik";
        }
    return 0;
}
