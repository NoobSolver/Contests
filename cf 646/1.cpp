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
	          ll n, x;
        cin >> n >> x;
        vector<ll> odd, even;
        for(ll i = 0; i < n; ++i)
        {
            ll y;
            cin >> y;
            if(y % 2 == 0)
                even.pb(y);
            else
                odd.pb(y);
        }   
        if(odd.size() == 0)
        {
            cout << "No\n";
        }
        else
        {
           ll od = odd.size();
           ll ev = even.size();
           x--;
           od--;
           if(x <= ev)
                cout << "Yes\n";
           else
           {
                ll dif = x - ev;
                if(dif % 2 == 0)
                    cout << "Yes\n";
                else
                {
                    if(ev > 0)
                        dif++;
                    else
                    {
                        cout << "No\n";
                        continue;
                    }
                    if(od >= dif)
                        cout << "Yes\n";
                    else
                        cout << "No\n";
                }
           }
        }
    }
    
  
  return 0;
}




