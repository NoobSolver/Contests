#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;cin>>n;
    vector<pair<int,int>>ar(n);
    for(ll i=0;i<n;i++)
    {
		cin>>ar[i].first>>ar[i].second;

  }
  sort(ar.begin(),ar.end());
  ll r,l=0;
  string res="";
  bool ok=false;
  for(ll i=0;i<n;i++)
  {
	  if(l>ar[i].first || r>ar[i].second)
	  {
		  ok=false;
		  break;
	  }while(l<ar[i].first)res=res+"R",l++;
	  while(r<ar[i].second)res=res+"U",r++;
  }
  if(ok)
  {cout<<"YES\n"<<res<<"\n";
  }
  else{cout<<"NO\n";}

}
  return 0;
}

