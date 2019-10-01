#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;


int main()
{
    string s;

    cin>>s;
    bool caps=true;
    for(int i=1; i<s.length(); i+=1){
        if(s[i]!=toupper(s[i])){
            caps=false;
            break;
        }
    }

    if(caps){
        caps=(s[0]!=toupper(s[0]));

        transform(s.begin(),s.end(),s.begin(),
                  [](unsigned char c){return tolower(c);});
        if(caps)
            s[0]=toupper(s[0]);
    }
    cout<<s;



    return 0;
}
