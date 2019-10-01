
//#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
string str;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.size() < 11) { cout << str<<endl; }
		else { cout << str[0] << str.size() - 2<< str[str.size() - 1]<<endl; }
	}
	
}
