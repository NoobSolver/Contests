#include "bits/stdc++.h"
	using namespace std;
 
 
#define PB(x) push_back(x)
#define EB(x) emplace_back(x)
#define F first
#define S second
#define FOR(i,n) for(ll i = 0 ; i < n ; i++)
#define FORR(i,a,b) for(ll i = (ll)a ; i < (ll)b ; i++)
#define RFOR(i,a,b) for(ll i = (ll)a ; i > (ll)b ; i--)
#define ll long long
#define llu unsigned long long
#define pii pair <int,int>
#define pll pair <ll,ll> 
 
int main(){
	ios::sync_with_stdio(false);
	#ifdef ABHI
		freopen("input.txt" , "r" , stdin);
	#endif
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		ll ar[n][n];
		FOR(i,n) FOR(j,i+1) cin>>ar[i][j];
		for(int i = n - 1 ; i > 0 ; i--){
			for(int j = 0 ; j < i ; j++){
				if(ar[i][j] > ar[i][j+1]){
					ar[i-1][j] += ar[i][j];
				}else{
					ar[i-1][j] += ar[i][j+1];
				}
			}
		}	
		cout<<ar[0][0]<<endl;
	}
	#ifdef ABHI
		cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s\n";
	#endif
	return 0;
}
 
