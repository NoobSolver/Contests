#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 void test(int n){
	 int res[1000];
	 int i=0;
	 while(n>0)
	 {
		 res[i]=n/2;
		 n=n%2;
		 i++;
	 }
	 for(int j=i-1;j>=0;j--)
	  printf("%d",res[j]);
  }
		 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	test(4);
return 0;
}
