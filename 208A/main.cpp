#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str, str2="";

    cin>>str;
    int i;
    while(true){
       i=str.find("WUB");
       if(i==-1)
           break;
       if(i!=0){
           str2.append(1,' ');
           str2.append(str,0,i);
       }

       str.erase(0,i+3);
    }
    if(str!=""){
        str2.append(1,' ');
        str2.append(str);
    }
    str2.erase(0,1);
    cout<<str2;
    return 0;
}
