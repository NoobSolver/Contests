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
  
    while (t--){
        int x,y;
        cin>>x>>y;
        if (x==y) cout<<0<<endl;
        else {
            int u  =abs(x-y);
            if (y > x){
                if (u%2 == 1) cout<<1<<endl;
                else cout<<2<<endl;
            }
            else {
                if (u%2 == 1) cout<<2<<endl;
                else cout<<1<<endl;
            }
        }
    }
		
  
  return 0;
}

