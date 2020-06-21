#include <bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false);cin.tie(NULL);
#define pll pair<ll ,ll>
typedef long long ll;

int main(){
    io;
    ll t=1;
    ll ans;
    cin>>t;
    while(t--){
     	ll n;
     	cin>>n;
     	n <<= 1LL;
     	vector<ll>vc(n);
     	n >>= 1LL;
     	ll c=1;
     	
     	vector<ll>odd,even;
     	for(auto &x:vc)
     	{
			cin>> x;
			if(x% 2 ==0)
			even.push_back(c);
			else
			odd.push_back(c);
			
			c++;
		}
		
		vector<pll>ans;
		for(int i=0; i+1 < odd.size(); i += 2)
		{
			ans.push_back({odd[i] ,odd[i+1]});
		}
		for(int i=0 ; i+1 < even.size(); i+=2)
		{
			ans.push_back({even[i] ,even[i+1]});
		}
		for(int i=0;i < n-1; i++)
		{
			cout << ans[i]. first << " " << ans[i].second <<endl;
			
		}
		
		
     	
     	
     	
     	
     
}
	#ifdef gau
		cerr<<"Time Elapsed "<<(double)1000.00*clock()/CLOCKS_PER_SEC <<" ms\n"; 
	#endif
	return 0;
} 



