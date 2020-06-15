#include<bits/stdc++.h>
 
typedef long  long  ll;
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
		int n;
    cin >> n ;
    vector<int> br(n);
    for(int x=0;x<n;x++) 
    {
		cin >> br[x];
		}
    sort(br.begin(), br.end());
    int ans=1;
    int c=1,mx=0;
    for(int x=0;x<n;x++)
    {
		mx=max(mx,br[x]);
		if(c>=mx)
		{
			ans=max(ans,c+1);
		}
		c++;
	}
    
    
    cout<<ans<<endl;
    
  }
	
return 0;
}


