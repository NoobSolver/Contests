#include <bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

int main(){
    io;
    int t;
    cin>>t;
    while(t--){
     	int n,k;
     	cin>>n>>k;
		set<ll>s;
		
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			s.insert(x);
		}
		if((int)s.size()>k)
		{
			cout<<-1<<endl;
			return 0;
		}
		cout<<k*n<<endl;
		for(int j=0;j<n;j++)
		{
			for(auto i:s)
			{
				cout<<i<<" ";
			}
			if(s.size()!= k){
				for(int lol =0;lol< k-s.size();lol++)
				{cout<<1<<" ";
				}
			}
		}
	cout<<endl;
    
}
	#ifdef gau
		cerr<<"Time Elapsed "<<(double)1000.00*clock()/CLOCKS_PER_SEC <<" ms\n"; 
	#endif
	return 0;
} 

