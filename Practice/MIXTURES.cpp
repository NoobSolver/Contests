/****************************************************
*****************************************************
**               Abhishek(abhiy13)                 **          
**             Chandigarh University               **
**   https://www.youtube.com/watch?v=r6zIGXun57U   **
*****************************************************
****************************************************/ 
 
 
#include "bits/stdc++.h"
	using namespace std;
 
 
//`````````````````````````````````````````````````````Random Stuff Here```````````````````````````````````````````````````````//
	
#define io std::ios::sync_with_stdio(false);
#define FOR(i,n) for(ll i = 0 ; i < n ; i++)
#define FORR(i,a,b) for(ll i = a ; i < b ; i++)
#define RFOR(i,a,b) for(ll i = a ; i > b ; i--)	
#define all(x) begin(x),end(x)
#define SZ(x) x.size()
#define ll long long
#define llu unsigned long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define mp(a,b) make_pair(a,b)
#define clr(x) memset(x,0,sizeof(x))
#define vclr(x,y) memset(x,y,sizeof(x))
#define rsort(x) sort(x.rbegin(),x.rend())
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define TRACE
 
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif   
 
 
//``````````````````````````````````````````````````````Start of Program`````````````````````````````````````````````````//
 
ll ar[1000];
ll dp[1000][1000];
 
 
ll sum(ll i , ll j){
	ll res = 0;
	FORR(k,i,j+1){
		res += ar[k];
		res%=100;
	}
	return res;
}
 
ll solve(ll i , ll j){
	if(i>=j){
		return 0;
	}
	if(dp[i][j] != -1) return dp[i][j];
 
	dp[i][j] = INT_MAX;
	for(ll k = i ; k <= j ; k++){
		dp[i][j] = min(dp[i][j] , solve(i,k) + solve (k+1,j) + sum(i,k)*sum(k+1,j));
	}
	return dp[i][j];
}
 
int main(){
	//io
	#ifdef ABHI
		freopen("input.txt" , "r" , stdin);
	#endif
	int n;
	while(scanf("%d" , &n) != EOF){
		FOR(i,n) cin>>ar[i];
		FOR(i,1000) FOR(j,1000) dp[i][j] = -1;
		cout<<solve(0LL,1LL*(n-1))<<endl;
	}
	#ifdef ABHI
		cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s\n";
	#endif
	return 0;
} 
