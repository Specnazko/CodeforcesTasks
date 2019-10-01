#include <iostream>

using namespace std;

int main()
{
    int k, n, w, s=0;
    cin>>k>>n>>w;
    s=((k+(k*w))*w)/2;
    cout<<max((s-n),0);

    return 0;
}
