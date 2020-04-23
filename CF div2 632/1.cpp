#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		int p=1;
		int a[n][m];
		char b[n][m];
		int tk=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i%2==0&& tk==0)
				{
				//	p^=1;
					tk=1;
				}
				a[i][j]=p;
				p^=1;
			}
		}
	//	int tk=0;
		for(int i=0;i<n;i++)
		{
		
			for(int j=0;j<m;j++)
			{
			
				if(a[i][j]==1)
				{
					b[i][j]='B';
				}
				else
				{
					b[i][j]='W';
				}
			}
		}
		int bb=0,wh=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(b[i][j]=='B')
				{
					bb++;
				}
				else
				{
					wh++;
				}
			}
	
		}
		if(bb!=wh+1)
		
		{
			int ok=0;
				for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i&1){
				if(b[i][j]=='W' )
				{
					b[i][j]='B';
					ok=1;
					break;
					
				}
				}
			}
			if(ok){break;}
	
		}
		}
		
			for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
			cout<<b[i][j];
			}
			cout<<endl;
	
		}
	}
	
	
}
