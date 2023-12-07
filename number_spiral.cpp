#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define inf 1e18
#define mod 1000000007
 
int main() {
	ll t; cin >> t;
	while(t--) {
	    ll a, b; 
	    cin >> a>> b;
	    ll x;
    	if (a>b){
    		if (a%2==0) x = (a*a -b+1);
    		else x = ((a-1)*(a-1) +b);
    	}
    	else{
    		if (b%2==0) x = ((b-1)*(b-1) +a);
    		else x = (b*b - a+1);
    	}
	    cout<<x<< endl;
	}
}
