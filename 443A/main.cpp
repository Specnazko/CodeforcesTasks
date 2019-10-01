#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str;
    set <char> alf;
    cin >> str;
    if (str[1]>='a' && str[1]<='z')
    {
        alf.insert(str[1]);
    }
    if (str[1]=='}') {
    cout << 0;
    return 0;}
    if (str[2]=='}') {
    cout << 1;
    return 0;}
    while (true)
    {
        cin >> str;
        if (str[0]>='a' && str[0]<='z')
        {
            alf.insert(str[0]);
        }
        if (str[1]=='}') break;
    }
    cout <<alf.size();

    return 0;
}
