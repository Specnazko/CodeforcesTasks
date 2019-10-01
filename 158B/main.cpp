#include <iostream>
#include <string>

using namespace std;


int main()
{
    int n, cnt[5], taxis=0, temp;
    cin>>n;
    for(int i=0;i<5;i+=1){
        cnt[i]=0;
    }
    for(int i=0; i<n; i+=1){
        cin>>temp;
        cnt[temp]+=1;
    }
    int a;
    taxis=cnt[4]+cnt[3];
      cnt[1]=max(0,cnt[1]-cnt[3]);
      taxis+=(2*cnt[2]+cnt[1]+3)/4;
    cout<<taxis;
    return 0;
}
