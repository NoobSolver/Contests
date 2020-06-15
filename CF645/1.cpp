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
	
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int ans=0;
		
		if(n%2==0  and m%2==0)
		ans+=(n/2)*m;
		else if(n%2==1  and m%2==0)
		ans+=(m/2)*n;
		else if(n%2==0 and m%2==1)
		ans+=(n/2)*m;
		else
		{
			ans += ((n - 1) / 2) * (m - 1);
            ans += (n - 1) / 2;
            ans += (m - 1) / 2;
            ans ++; }
		
		 cout<<ans<<endl;
		
		
    }
    
  
	
return 0;
}
/*
Another Solution
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
	
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<(n*m-1)2+1<<endl;
		
    }
    return 0;
 }
    
 
*/


