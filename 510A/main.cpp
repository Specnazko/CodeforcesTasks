#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string str={"#"}, str1={"."}, str2={"#"};
    for (int i=0; i<m-2; i++)
    {
        str+="#";
        str1+=".";
        str2+=".";
    }
    str+="#";
    str1+="#";
    str2+=".";
    for (int i=0; i<n;)
    {
        cout << str << endl;
        i++;
        if (i>=n) return 0;
        cout << str1 << endl;
        i++;
        if (i>=n) return 0;
        cout << str << endl;
        i++;
        if (i>=n) return 0;
        cout << str2 << endl;
        i++;

    }
    return 0;
}
