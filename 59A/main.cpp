#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() //65 90
//97 122
{   int A=0, a=0;
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z') A++;
        else a++;
    }
    if (A>a)
    {
        for (int i=0; i<str.size(); i++)
        {
            cout<<(char)toupper(str[i]);
        }
    }
    else
    {
        for (int i=0; i<str.size(); i++)
        {
            cout<<(char)tolower(str[i]);
        }
    }
    return 0;
}
