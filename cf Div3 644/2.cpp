#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	int t; cin>>t;
	while(t--)
	{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mi=INT_MAX;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			mi=min(mi,abs(a[i]-a[j]));
		}
	}
	cout<<mi<<endl;
}
	
}
