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
  string s;
  cin >>s; 
  sort(s.begin(), s.end());
  ll cnt = 0; 
  vector<string> v;
  do {
    v.pb(s);
    cnt++;
  } while (next_permutation(s.begin(), s.end()));
  cout<< cnt<< endl;
  for(auto x : v) cout<< x<< endl;
}
