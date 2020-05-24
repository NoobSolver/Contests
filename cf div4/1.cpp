#include<bits/stdc++.h>
 
typedef long  double ll;
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
	int t;cin>>t;
	while(t--){
		int n, m;
    cin >> n >> m;
    vector<int> ar(n);
    vector<int> br(m);
    for(int &x: ar) cin >> x;
    for(int &x: br) cin >> x, x--;
    sort(br.begin(), br.end());
    for(int i = 0; i < m; ++i) {
      int j = i;
      int pc = 0;
      while(j < m && br[j] - br[i] == pc) {
        pc++;
        j++;
      }
      sort(ar.begin() + br[i], ar.begin() + br[i] + pc + 1);
      i = j - 1;
    }
    bool ok = true;
    for(int i = 1; i < n; ++i) {
      ok &= (ar[i] >= ar[i - 1]);
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
	
return 0;
}

