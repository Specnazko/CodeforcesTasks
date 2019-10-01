#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;

    cin>>n;
    int monets[n];
    for (int i=0; i<n; i++) {
        cin>>monets[i];
    }
    for (int i=0; i<n; i++) {
            sum+=monets[i];
        }
    for (int i=0;i<n;i+=1){
        for (int j=i;j<n;j+=1){
            if (monets[i]>=monets[j]) {}
            else {swap(monets[i],monets[j]);}
        }
    }

    int m=0;
    for (int i=0, min=0; min<=sum/2; i++){
        min+=monets[i];
        m++;
    }
    cout<<m;
    return 0;
}
