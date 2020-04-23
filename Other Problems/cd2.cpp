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
	ll t,n;
	
	cin>>t>>n;
	map<string, int> mp;
  for(int i = 0; i < t; ++i) {
    string s; cin >> s;
    mp[s]++;
  }
  string pref = "";
  string suff = "";
  string mid = "";
  for(auto &x: mp) {
    if(x.second == -1) continue;
    auto s = x.first;
    reverse(s.begin(), s.end());
    if(mp.find(s) != mp.end() && s != x.first) {
      pref += x.first;
      suff = s + suff;
      x.second = -1;
      mp[s] = -1;
    } else if(s == x.first) {
      mid = s;
    }
  }
  cout << pref.size() + suff.size() + mid.size() << '\n';
  
  cout << pref + mid + suff << '\n';
  return 0;
}
		 
		
	    
		




