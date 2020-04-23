#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
int power(int x,int y)
{
	if(y==0)
	   return 1;
	if(y%2==0)
	   return power(x,y/2)*power(x,y/2);
	return x* power(x,y/2)*power(x,y/2);
}
int order(int x)
{
	int n=0;
	while(x)
	{
		n++;
	  x=x/10;
  }
  return n;
}
bool ispalindrome(int x)
{
	int n=order(x);
	int temp=x,sum=0;
	while(temp)
	{
		int r=temp%10;
		sum+=power(r,n);
		temp=temp/10;
	}
	return (sum==x);
}
 int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	 cout<<ispalindrome(n)<<endl;
 }
return 0;
}

