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
	int t;
	cin>>t;
	while(t--)
	{
		int p,s;
		cin>>p>>s;
		string str;
		cin>>str;
		int lc,rc=0;
		int l,r=0;
		int f=0;
		int res=0,len=str.length();
		while(str[l]!=s && l<len){
			l++;
			lc++;
		}
		r=l+1;
		while(f!=(p-1) && (r-1)<len)
		{
			if(str[r]==s)
			f++;
			r++;
		}
		
		while (l < len && (r- 1) < len) { 
   
        while (str[l] != s && l < len) { 
            l++; 
            lc++; 
        } 
  
        while (r < len && str[r] != s) { 
            if (str[r] == s) 
                f++; 
            r++; 
            rc++; 
        } 
  
        res = res+ (lc + 1) * (rc + 1); 
        f= p- 1; 
  
        lc = 0; 
        rc = 0; 
        l++;  r++; 
    } 
    cout<<res<<endl; 
	
	}
return 0;

}


