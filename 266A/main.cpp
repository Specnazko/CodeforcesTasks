#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
string str;
cin>>str;
int i=1;
int x=0;
while (i<str.size()){
    if (str[i]!=str[i-1]){}
    else {x++;}
    i++;

   }

cout<<x;

    return 0;
}
