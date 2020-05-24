#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	int t; cin>>t;
	while(t--)
	{
	ll a,b; cin>>a>>b;
	if(a<b)
	{
		swap(a,b);
	}
	ll to=b+b;
	ll fro=a;
	ll mi=max(to,fro);
	cout<<mi*mi<<endl;
}
	
}
