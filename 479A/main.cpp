#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum1=a+b+c;
    int sum2=a*(b+c);
    int sum3=(a+b)*c;
    int sum4=a*b*c;
    if (sum1>=sum2 && sum1>=sum3 && sum1>=sum4) cout << sum1;
    else if(sum2>=sum3 && sum2>=sum4) cout << sum2;
        else if (sum3>=sum4) cout<<sum3;
            else cout<<sum4;
    return 0;
}
