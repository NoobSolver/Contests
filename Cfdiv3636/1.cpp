#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() 
{
	
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll p=0;
		ll sm=0;
		int cnt=0;
		ll x;
		while(1)
		{
			sm+=(1LL<<p);
			p++;
			cnt++;
			if(n%sm==0 && cnt>1)
			{
				x=n/sm;
				 break;
			}
			
			
		}
		cout<<x<<endl;
	}

}
