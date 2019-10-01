#include <iostream>

using namespace std;

int main()
{
    int inyear;
    cin >> inyear;
    int a, b, c, d;
    bool year=false;

    while (!year)
    {
        inyear++;
        a=inyear/1000;
        b=(inyear%1000)/100;
        c=(inyear%100)/10;
        d=(inyear%10);
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) year=true;


        }
    cout << inyear;
    return 0;
}
