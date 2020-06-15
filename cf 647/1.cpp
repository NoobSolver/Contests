#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
const ll mod = (ll) 1e9+7;
 
using namespace std;
 
int main() {
  IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t;
  while (t--) {
   	ll m,n;
   	cin>>m>>n;
   
   	 if (m == n) {
        cout<<0<<endl; 
        continue;
	}
		
	if(m>n) swap (m,n);
  ll count=0;
   
   
	while (n%8 == 0 && n/ 8 >= m ) 
    {
		n/=8;
        count++;
        
	}
	while (n%4 == 0 && n/ 4 >= m ) 
    {
		n/=4;
        count++;
        
	}
	 while (n%2 == 0 && n/ 2 >= m ) 
    {
		n/=2;
        count++;
        
	}
	
	if(m==n){
		cout<<count<<endl;
	}
	
	else
	{
		cout<<-1<<endl;
	}
        
       
}
 return 0;    	
  }
  







