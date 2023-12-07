#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;
 
int main() {
    ll n;
	cin >> n;
	if(n== 2 || n==3) {
		cout<< "NO SOLUTION"; exit(0);
	}
	for(int i = 2; i<= n; i+=2) cout<< i<< " " ;
	for(int i = 1; i<=n; i+=2) cout<< i<< " ";
}
