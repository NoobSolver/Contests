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
	int t;cin>>t;
	
	while(t--){
		int cnt=0;
		string s;
		string s1,s2,s3,s4;
		cin>>s;
		int n=s.length();
		for(int i=1;i<=(n-2)/2;i++)
		{
	s1=s.substr(0,i);
	s2=s.substr(i,i);
	s3=s.substr(2*i,(n-2*i)/2);
	s4=s.substr(2*i+((n-2*i)/2),(n-2*i)/2);
	
		 
		 if(s1==s2 && s3==s4)
		 {
			 cnt++;
		 }
		 
			
		}

		
		cout<<cnt<<"\n";
  }
	
return 0;
}


