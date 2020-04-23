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
  int t;
  cin >> t;
  while (t--) {
   int m,n;
  
   cin>>m>>n;
   vector<ll>v1(m),v2(n) ;
   for(int i=0;i<m;++i)
   cin>>v1[i];
    for(int i=0;i<n;++i)
   cin>>v2[i];
   sort(begin(v2),end(v2));
   
   
    bool flag=true;
   for(int i=0;i<m;i++){
   for(int j=0;j<m;j++){
	   if(v1[i]<v1[j-1]){
		   if(binary_search(begin(v2),end(v2),j)){
			   swap(v1[j],v1[j-1]);
		   }
		   else{
			   flag=false;
			   
		   }
	   }
	   if(!flag) break;
   }
   if(!flag)break;
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


	   
	
   
  }
  return 0;
}

