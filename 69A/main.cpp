#include <iostream>
#include <string>


using namespace std;


int main()
{
    int n,x,y,z,sx=0,sy=0,sz=0;

    cin>>n;

    for(int i=0; i<n; i+=1){
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }

    cout<< (sx!=0||sy!=0||sz!=0?"NO":"YES");

    return 0;
}
