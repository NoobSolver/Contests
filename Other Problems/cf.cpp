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
      bool ok=false;
     for(ll i=2;i<=n/i;i++)
     {
         if(n%i==0)continue;
         int nn=n/i;
         for(ll j=0;j<=nn/j;j++)
         {
             if(nn%j==0)continue;
             int mn=nn/j;
              if(mn==1)continue;
              set<ll>v={mn,i,j};
              if((int)v.size()!= 3) continue;
              ok=true;
              cout<<"Yes:\n";
              cout<<mn<<' '<<i<<' '<<j<<'\n';
              break;
         }
         if(ok) break;
     }
     if(!ok) cout<<"No:\n";
  }
  return 0;
}

