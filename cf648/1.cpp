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
   	
   		int n, m;
	cin >> n >> m;
	int a[n][m], row[n] = {0}, col[m] = {0};
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				row[i] = 1;
				col[j] = 1;
				
			}
		}
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(row[i] or col[j]) continue;
			count++;
			row[i] = 1;
			col[j] = 1;
		}
	}
	if(~count&1)
		cout << "Vivek" << endl;
	else
		cout << "Ashish" << endl;
        
       
}
 return 0;    	
  }
  








