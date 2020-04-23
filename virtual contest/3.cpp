#include<bits/stdc++.h>
 
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define vec vector<int>
#define F(i,n) for(ll i=0;i<n;i++)
const ll mod = (ll) 1e9+7;
 
using namespace std;
 
int main() {
  IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t;
  string s;
  ll m,n;
  ll x;
  while (t--) {
  
   vec arr(26,0);
        map<ll,ll> in;
        vec occu(26,0);
        cin >> n >> m;
        cin >> s;
        F(i,m)
        {
            cin >> x;
            in[x]++;
        }
        
        F(i,n)
        {
            arr[s[i]-'a']++;
            occu[s[i]-'a']++;
            if(in[i+1] > 0)
            {
                for(ll k = 0;k<26;k++)
                {
                    if(arr[k] > 0)
                        arr[k] += in[i+1]*occu[k];
                }
            }
        }
        
        F(i,26)
        cout << arr[i] << " ";
        cout << endl;
}
   
  return 0;
}

