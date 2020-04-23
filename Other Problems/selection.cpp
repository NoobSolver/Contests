#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++)
	cin >> a[i];
	
		for(int i = 0; i<n-1; i++)
		{
			int temp = i;
			int j = i+1;
			while(j<n )
			{
				if(a[j]<a[temp])
					temp = j;
				j++;
			}
			int x = a[i];
			a[i] = a[temp];
			a[temp] = x;
		}
		
		for(int i = 0; i<n; i++)
			cout << a[i] << " ";
			
			cout << endl;
	return 0;
}
