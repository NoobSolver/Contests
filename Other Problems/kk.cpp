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
	
	ll t;
	
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int i,j;
		int arr[10000];
		for( i=0;i<2*n+2;++i)
		cin>>arr[i];
	    int *x,*y;
	    int Xor= arr[0];
	    int set_bit_no;
	    *x=0;
	    *y=0;
	    for(i=1;i<2*n+2;i++)
	    Xor^=arr[i];
	    set_bit_no =Xor & ~(Xor-1);
	    for(i=0;i<2*n+2;i++)
	    {
			if(arr[i] & set_bit_no)
			*x=*x ^ arr[i];
			else
			*y=*y ^arr[i];
		}
		cout<<*x <<' '<<*y;
	}
	
		
	
return 0;
}

