#include <iostream>

using namespace std;

int main(){
string str;
cin>>str;
int i=1;
int x=1;
while (x<7&&i<str.size()){
    if (str[i]!=str[i-1]){x=1;}
    else {x++;}
    i++;
    //cout<<i<<" "<<x<<endl;
   }

if (x<7||str.size()<7){cout<<"NO";}
else {cout<<"YES";}

    return 0;
}
