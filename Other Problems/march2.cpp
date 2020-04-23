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
  ll t=1;
  cin >> t;
 
  while (t--) {
    int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	int maxi = *max_element(a, a+n);
	int front = 0, back = 0, pos = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == maxi){ front = i; break;}
	}
	for(int i = n-1; i >= 0; i--){
		if(a[i] == maxi){ back = i; break;}
	}
		int d = back-front;
		cout << max(0, (n/2) - d) << endl;
  }
  return 0;
}


