#include <iostream>

using namespace std;

int main()
{
    int n=0;
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++)
    {
        if(str[i]=='7'||str[i]=='4')
                     n++;
    }
    if (n==4 || n==7) cout << "YES";
    else cout << "NO";
    return 0;
}
