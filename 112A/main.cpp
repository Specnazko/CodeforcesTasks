#include <iostream>

using namespace std;

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int a, b;
    int n, m;
    //n=str1.size();
    //m=str2.size();
    a=tolower(str1 [0]);
    b=tolower(str2 [0]);
    for (int i=0;a==b&&i<str1.size();i++){
    a=tolower(str1 [i]);
    b=tolower(str2 [i]);}
    if (a==b) {cout<<"0";}
    else {
        if (a>b) {cout<<"1";}
        else {cout<<"-1";}
    }
}
