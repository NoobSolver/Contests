#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t; cin>>t;
	while(t--)
	{
	bool can=true;
	int n; cin>>n;
	int x,y; cin>>x>>y;
	int px=x, py=y;
	if(px<py){can=false;}
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		if(x<px || y<py || x<y || (x==px&&y!=py))
		{
			//cout<<px<<" "<<py;
			can=false;
		}
		px=x, py=y;
	}
	cout<<(can?"YES\n":"NO\n");
}
}
