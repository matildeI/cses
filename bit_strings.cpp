#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e18
#define mod 1000000007
 
ll fastexp( ll a, ll b) {
	if( b== 0) return 1;
	ll c = fastexp(a, b/2);
	(c*=c)%=mod;
	if(b%2) (c*=a)%=mod;
	return c;
}
int main() {
	ll n; cin >> n;
	cout<< fastexp(2, n);
}
