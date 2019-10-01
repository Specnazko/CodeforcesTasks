#include <iostream>
using namespace std;

int main(){
    double n, m;
    cin>>m>>n;
    double x;
    x=n/2;
    if (x*2<=n) {x=x*m;
    cout<<int (x);}
    else {x=(x-1)*m;
    cout<<int (x);}
    return 0;
}
