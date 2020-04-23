#include<bits/stdc++.h>
 
typedef long  long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 
int main() {
	IOS;
	cout.precision(10);
	cout<<fixed;
	string s;
	ll n;
	cin>>n;
	cin.ignore();
	vector<vector<string>>ans(n);
	for(ll i=0;i<n;i++)
	cin>>s[i];
  string word;
  for(ll i=0;i<n;i++)
  {
     for(int j=0;j<s[i].size();j++)
     {
		 char it=s[i][j];
		 if(isalpha(it))
		 {
			 word+=it;}
			 else if(it== ' ')
			 {
			  if(!word.empty())
	 {
		 ans[i].pb(word);
		 word.clear();}
	 }
 }
 if(!word.empty())
 {
	 ans[i].pb(word);
	 word.clear();
 }}
 
 for(ll i=n-1;i>=0;i++)
 {
	 for(ll j=0;j<ans[i].size()-1;j++)
	 {
		 cout<<ans[i][j]<<endl;
		 cout<<' ';
	 }cout<<'\n';
 }
   return 0;
}
		    
	    
	    
	    
	    
	    
	    
	    
	    
		
	
	
