#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    for (int i=1; i<n; i++)
    {
        if (i%2==0) str+="I love that ";
        else str+="I hate that ";
    }
    if (n%2==0)
    cout << str + "I love it";
    else cout << str + "I hate it";
    return 0;
}
