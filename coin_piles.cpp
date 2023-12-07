#include <bits/stdc++.h>
//#include "./stdc++.h"
 
using namespace std;
#define ll long long
#define inf 1e18
#define mod 1000000007
 
int main() {
	ll t; cin >> t;
	while(t--) {
		ll a, b;
		cin >> a>>b;
		if( b> a) swap(a,b);
		if(a> 2*b) cout << "NO";
		else if((a+b) %3 == 0) cout<< "YES";
		else cout<< "NO";
		cout<< endl;
	}
}
