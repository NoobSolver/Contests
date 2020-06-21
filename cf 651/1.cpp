#include <bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

int main(){
    io;
    ll t;
    ll ans;
    cin>>t;
    while(t--){
     	ll n;
     	cin>>n;
     	if(n&1)
     	cout<<(n-1)/2<<endl;
     	else
     	cout<<n/2<<endl;
     
     	
     
}
	#ifdef gau
		cerr<<"Time Elapsed "<<(double)1000.00*clock()/CLOCKS_PER_SEC <<" ms\n"; 
	#endif
	return 0;
} 


