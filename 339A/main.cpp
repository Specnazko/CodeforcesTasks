#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i=0;i<str.size();i+=2){
    str[i]=tolower(str[i]);
    }
    for (int i=0;i<str.size();i+=2){
        for (int j=i;j<str.size();j+=2){
            if (str[i]<=str[j]) {}
            else {swap(str[i],str[j]);}
        }
    }
    cout<<str;
    return 0;
}
