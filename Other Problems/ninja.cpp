#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 const int MAX_CHAR = 256; 
  
	 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int res=-1;
		int first[MAX_CHAR]; 
    for (int i = 0; i < MAX_CHAR; i++) 
        first[i] = -1; 
  
    for (int i = 0; i < n; i++) { 
        int first= first[s[i]]; 
  
         
        if (first== -1) 
            first[s[i]] = i; 
    
        else
            res = max(res, abs(i - first - 1));
		}
		cout<<res<<endl;	
	
	}
return 0;

}

