#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int a[110];
		memset(a,0,sizeof(a));
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		for(int i=0;i<110;i++)
		{
			if(a[i])
			{
				cout<<i<<": "<<a[i]<<"\n";
			}
		}
	}
}