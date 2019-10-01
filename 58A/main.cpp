#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string w;
    string test;
    test="hello";
    cin>>str;
    int i=0;
    for (;i<str.size();i++) {
        if (str[i]=='h') {w[0]='h';
            i++;
        break;}
    }

    for (;i<str.size();i++) {
        if (str[i]=='e') {w[1]='e';
        i++;
        break;}
    }

    for (;i<str.size();i++) {
        if (str[i]=='l') {w[2]='l';
            i++;
        break;}
    }

    for (;i<str.size();i++) {
        if (str[i]=='l') {w[3]='l';
            i++;
        break;}
    }

    for (;i<str.size();i++) {
        if (str[i]=='o') {w[4]='o';
            i++;
        break;}
    }



    if (w[0]==test[0]&&w[1]==test[1]&&w[2]==test[2]&&w[3]==test[3]&&w[4]==test[4]) {cout<<"YES";}
    else {cout<<"NO";}
    return 0;
}
