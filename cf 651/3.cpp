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
     	if(n == 1)
     	{
		
		cout<< "FastestFinger\n";
		continue;}
		if( n == 2)
		{
			cout<<"Ashishgup\n";
			continue;
		}
		ll even = 0;
		if(n % 2 ==1)
		{
			cout << "Ashishgup\n";
			continue;
		}
		while( n % 2 == 0)
		{
			even ++ ;
			n= n/2;
		}
		ll odd=0;
		for( ll i=3; i* i <= n;i +=2)
		{
			while( n% i == 0)
			{
				odd ++;
				n =n/i;
			}
		}
		if( n >2)
		odd++;
		if( odd == 0)
		cout<< "FastestFinger\n";
		else if(even ==1)
		{
			if( odd ==1 )
			{
				cout<< "FastestFinger\n";
			}
			else
			{
				cout << "Ashishgup\n";
			}
			
			
		}
		else 
		{
		cout << "Ashishgup\n";	
		}
		
		
     	
     	
}
	#ifdef gau
		cerr<<"Time Elapsed "<<(double)1000.00*clock()/CLOCKS_PER_SEC <<" ms\n"; 
	#endif
	return 0;
} 




