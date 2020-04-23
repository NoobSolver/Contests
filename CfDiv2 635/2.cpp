#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
		int t; cin>>t;
		while(t--)
		{
			bool cn=true;
			int n,a,b; cin>>n>>a>>b;
			while(n>20)
			{
			//	cout<<n<<endl;
				if(a)
				{
					n/=2;
					n+=10;
					a--;
				}
				else if(b)
				{
					n-=10;
					b--;
				}
				else if(a==0 && b==0)
				{
					cn=false; break;
				}
			
			}
		while(n>0)
		{
			if(b)
			{
			b--;
			n-=10;
			
			}
			else
			{
				cn=false; break;
			}
		}
			cout<<(cn?"YES\n":"NO\n");
		}
}
