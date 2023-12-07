#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;
 
int main() {
    ll n;
  	string s; cin >> s;
  	n = s.size();
  	ll ans= 0;ll cur = 1;
  	for(int i = 1; i< n; i++) {
  		if(s[i] == s[i-1]) cur++;
  		else {
  			ans = max(ans, cur);
  			cur = 1;
  		}
  	}
    ans = max(ans, cur);
 
	  cout<< ans;
}
