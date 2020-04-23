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
    ll n;
    cin >> n;
   string s;
   cin>>s;
   int x=0,y=0;
   for(int i=0;i<n;)
   {
	   if(s[i]=='L')
	   x--;
	   else if(s[i]=='R')
	   x++;
	   else if(s[i]='U')
	   y++;
	   else if(s[i]=='D')
	   y--;
	   if((s[i]=='L' || s[i]=='R')){
	   while((s[i]=='L' || s[i]=='R')&& i<=n ) i++;}
	   else if((s[i]=='U'||s[i]=='D')){
	    while((s[i]=='U' || s[i]=='D')&& i<=n ) i++;}
	    else{
			i++;}
		}
		cout<< x<<" "<<y<<endl;
  }
  return 0;
}

