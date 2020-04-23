
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
	int n ;
	cin >> n;
	int arr[n];
	vector <int> ans;
	for (int i = 0; i < n ; i ++){
		cin >> arr[i];
		int l = 0;
		int r = ans.size() - 1;
		while (l <= r){
			int mid = l + (r-l)/2;
			if (ans[mid] < arr[i]){
				l = mid + 1;
			}else if (ans[mid] > arr[i]){
				r = mid - 1;
			}
		}

		ans.insert(ans.begin() + l , arr[i]);
		cout << ans.size() - l << endl;

	}

    return 0;
}	
