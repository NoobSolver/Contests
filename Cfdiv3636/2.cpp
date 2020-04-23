#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() 
{
	
	int t; cin>>t;
	while(t--)
	{
			ll n;cin>>n;
			if(n%4!=0)
			{
				cout<<"NO\n"; continue;
			}
			cout<<"YES\n";
			int p=2;
			int sm=0, sm2=0;
			for(int i=0;i<n/2;i++)
			{
				cout<<p<<" ";
				sm+=p;
				p+=2;
				
			}
			int k=1;
			for(int i=0;i<n/2-1;i++)
			{
				cout<<k<<" ";
			//	k+=2;
				sm2+=k;
				k+=2;
			}
			
			cout<<sm-sm2<<endl;
			
	}

}
