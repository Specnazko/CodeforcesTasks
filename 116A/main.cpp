#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d=0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a>>b;
        c=c-a+b;
        if (d<c) {d=c;}
        else {}
    }
    cout<<d;
    return 0;
}
