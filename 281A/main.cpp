#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cin>>str;
    str[0]=char(toupper(str[0]));
    cout<<str;
    return 0;
}
