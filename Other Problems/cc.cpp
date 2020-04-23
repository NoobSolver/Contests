#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	ll n;
	cin>>n;
	vector<int>v;
	vector<ll>ans;
	for(ll i=0;i<n;++i)
	{cin>>v[i];
	int l=0;
	int r=ans.size()-1;
	while(l<=r)
	{
		int md=l+(r-1)/2;
		if(ans[md]<v[i])
		{
			l=md-1;}
			else if(ans[md]>v[i]){
			r=md+1;}
		}
		ans.insert(ans.begin()+1,v[i]);
		cout<<ans.size()-l<<endl;
	}
	
			
				 
return 0;
}

