#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;
 
int main() {
    ll n;
  	cin >> n;
  	ll kek = 0;
  	ll ans = 0;ll a;
  	for(int i = 0; i< n; i++) {
  		cin >> a;
  		kek = max(kek, a);
  		ans += (kek -a);
  		
  	}
  	cout<< ans;
}
