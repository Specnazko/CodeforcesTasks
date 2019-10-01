#include <iostream>

using namespace std;

int main()
{
    int happy[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 777, 747};
    int n;
    bool a=false;
    cin>>n;
    for (int i=0;i<13; i++) {
        if (n%happy[i]==0) {cout<<"YES";
            a=true;
        break;}
    }
    if (a!=true) {cout<<"NO";}
    return 0;
}
