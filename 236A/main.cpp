#include <iostream>
#include <string>

using namespace std;


int main()
{

    string str;
    int n=0;
    bool mas[26];

    for(int i=0; i<26; i++)
    {mas[i]=false;}

    cin>>str;

    for(int i=0; i<str.size(); i++)
    {mas[str[i]-'a']=true;}

    for(int i=0; i<26; i++)
       { if(mas[i]) n++;}
    if (n%2==0) {cout<<"CHAT WITH HER!";}
    else {cout<<"IGNORE HIM!";}


    return 0;
}
