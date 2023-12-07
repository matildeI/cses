#include <bits/stdc++.h>
using namespace std;
#define inf 1000000000006
#define ll long long
#define mod 1000000007
#define s second
#define f first
#define mp make_pair
#define pb push_back
#define MAXN 500000
 
 
int main () {
  ll n; cin >> n; 
  vector<ll> p(n);
  for(int i = 0; i< n; i++ ) cin >> p[i];
  ll ans = inf;
  ll a, b; 
  for(int i = 1; i< (1<<n); i++) {
    a = b= 0;
    for(int j = 0; j< n; ++j) {
      if(i & (1<< j)) a+= p[j];
      else b+= p[j];
    }
    ans = min(ans, abs(a-b));
  }
  cout<< ans;
}
