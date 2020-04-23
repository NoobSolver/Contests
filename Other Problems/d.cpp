#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 double mean(int a[],int n)
 {
	 int sum=0;
	 for(int i=0;i<n;i++)
	   sum+=a[i];
	   return (double)sum/(double)n;
   }
  double median(int a[],int n)
{
	sort(a,a+n);
    if(n%2 !=0)
     return (double)a[n/2];
    return  (double)(a[(n-1)/2] +a[n/2])/2.0;

}int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	
	int n;
	cin>>n;
	  int  a[1000];
	  for(int i=0;i<n;++i)
	  cin>>a[i];
	  cout<<"mean =" <<mean(a,n)<<endl;
	  
	   cout<<"median =" <<median(a,n)<<endl;
return 0;
}
