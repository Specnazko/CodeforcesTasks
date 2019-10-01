#include <iostream>
using namespace std;

string str;
int main(){
    cin>>str;
    bool a=false;
    for (int i=0;i<str.size(); i++) {
        if (str[i]=='H'||str[i]=='Q'||str[i]=='9') a=true;

    }
    if (a==1) {
        cout<<"YES";
    }
    else {cout<<"NO";}

    return 0;
}
