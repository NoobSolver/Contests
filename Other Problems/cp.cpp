#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;

int knapsack(int wt[],int val[],int s,int n)
{
if(n==0 || s==0)
{
return 0;	 
}
if(wt[n-1]<=s)
return max(val[n-1]+knapsack(wt,val,s-wt[n-1],n-1),knapsack(wt,val,s,n-1));
else 
return knapsack(wt,val,s,n-1);
}
int max(int a,int b)
{
	return (a>b)? a:b;}
	
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	int val[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	cin>>val[i];
	int wt[1000];
	for(int i=0;i<n;i++)
	cin>>wt[i];
	int s;cin>>s;
	cout<<knapsack(wt,val,s,n);
	
return 0;
}
