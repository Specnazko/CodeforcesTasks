#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string name1, name2, str;
    int alphabet[26];
    for (int i=0; i<26; i++)
    {
        alphabet[i]=0;
    }
    cin >> name1 >> name2 >> str;
    for (int i=0; i<name1.size(); i++)
    {
        alphabet[name1[i]-'A']++;
    }
    for (int i=0; i<name2.size(); i++)
    {
        alphabet[name2[i]-'A']++;
    }
    for (int i=0; i<str.size(); i++)
    {
        alphabet[str[i]-'A']--;
    }

    for (int i=0; i<26; i++)
    {
        if (alphabet[i]!=0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
