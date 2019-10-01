#include <iostream>

using namespace std;

int main()
{
    int x=0, n;
    cin>>n;
    string str;
    for (int i=0;i<n;i++){
        cin>>str;
        if (str[1]=='+') {x++;}
        else {}
        if (str[1]=='-'){x--;}

    }
    cout<<x;
    return 0;
}
