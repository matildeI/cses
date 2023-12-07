#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;
 
int main() {
    ll n;
    cin >> n;
  	ll res = 0;
  	cout<< n<< " ";
    while( n!= 1) {
  		if(n%2== 1) n = 3*n + 1;
  		else n/=2;
  		cout<< n<< " " ;
  	}
