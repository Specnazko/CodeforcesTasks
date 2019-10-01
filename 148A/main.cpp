
#include <iostream>
#include <cmath>


using namespace std;

int gcd(int a, int b){
   if(a==b)
       return a;
   if(a>b)
       return gcd(a-b,b);
   else
       return gcd(a,b-a);
}
int lcm(int a, int b){
   return a*b/gcd(a,b);
}

int lcm4(int a, int b, int c, int d =1){
   return lcm(lcm(a,b),lcm(c,d));
}

int main()
{
   int a,b,c,d,n;

   cin>>a>>b>>c>>d>>n;

   cout<<(n/a+n/b+n/c+n/d
          -n/lcm(a,b)-n/lcm(a,c)-n/lcm(a,d)-n/lcm(b,c)-n/lcm(b,d)-n/lcm(c,d)
          +n/lcm4(a,b,c)+n/lcm4(a,b,d)+n/lcm4(a,c,d)+n/lcm4(b,c,d)
          -n/lcm4(a,b,c,d));
   return 0;
}
