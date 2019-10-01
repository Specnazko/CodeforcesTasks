#include <iostream>

using namespace std;

int main()
{
    int n,a,max=0,min=200,nmax,nmin;

    cin>>n;
    for(int i=0; i<n; i+=1){
        cin>>a;
        if(a>max){
            max=a;
            nmax=i;
        }
        if(a<=min){
            min=a;
            nmin=i;
        }
    }
    cout<<(nmax>nmin?(nmax+n-nmin-2):(nmax+n-nmin-1));



    return 0;
}
