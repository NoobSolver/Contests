#include<bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back

const ll mod = (ll) 1e9+7;
 
using namespace std;
 
const int MAX = 100; 

// Fills a[m][n] with values from 1 to m*n in 
// spiral fashion. 
void spiralFill(int m, int n, int a[][MAX]) 
{ 
	// Initialize value to be filled in matrix 
	int val = 1; 

	/* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index */
	int k = 0, l = 0; 
	while (k < m && l < n) 
	{ 
		/* Print the first row from the remaining 
		rows */
		for (int i = l; i < n; ++i) 
			a[k][i] = val++; 

		k++; 

		/* Print the last column from the remaining 
		columns */
		for (int i = k; i < m; ++i) 
			a[i][n-1] = val++; 
		n--; 

		/* Print the last row from the remaining 
		rows */
		if (k < m) 
		{ 
			for (int i = n-1; i >= l; --i) 
				a[m-1][i] = val++; 
			m--; 
		} 

		/* Print the first column from the remaining 
		columns */
		if (l < n) 
		{ 
			for (int i = m-1; i >= k; --i) 
				a[i][l] = val++; 
			l++; 
		} 
	} 
} 

/* Driver program to test above functions */
int main() 
{  
	IOS
  #ifdef gm
  freopen("int.txt", "r", stdin);
  #endif
  ll t;
  cin >> t;
  
  while (t--) {
   	
   ll n,m;
   cin>>n;
	m=n;
	int a[MAX][MAX]; 
	spiralFill(m, n, a); 
	for (int i=0; i<m; i++) 
	{ 
	for (int j=0; j<n; j++) 
	
		cout << a[i][j] << " "; 
	cout << endl; 
	}
	
} 
	return 0; 
} 
