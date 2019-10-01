
#include <iostream>
using namespace std;

int main(){
	unsigned long long a, m, n;
	unsigned long long s;
	cin >> n;
	cin >> m;
	cin >> a;
	if (0<n,m,a<1e9){
		unsigned long long d;
		d=m/a;
		unsigned long long h;
		h=n/a;
		if (m<=d*a) {d=m/a;}
		else {
		d++;}
		if (n<=h*a) {h=n/a;}
		else {
		h++;}
		
		s=h*d;
		cout<<s;}
	else {s=1;
	cout<<s;}
return 0;

}
