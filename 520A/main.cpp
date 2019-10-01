#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n<26)
    {
        cout << "NO";
        return 0;
    }
    string str;
    cin >> str;
    set <char> alf;
    for (int i=0; i<n; i++)
    {
        alf.insert((char)tolower(str[i]));
    }
    if (alf.size()<26) cout << "NO";
    else cout << "YES";
    return 0;
}
