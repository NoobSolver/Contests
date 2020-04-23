#include<bits/stdc++.h>
 
typedef long  long ll;
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
	ll t;
	
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		b-=a;
		if(b % (c+d)==0)
		cout<<b/(c+d)<<"\n";
		else{
			cout<<-1<<"\n";
		}}
		return 0;
	}
		 
		
	    
		



