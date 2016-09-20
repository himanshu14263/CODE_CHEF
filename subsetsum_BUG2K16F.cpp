#include<bits/stdc++.h>
using namespace std;

int subsum(int n,int sum)
{
	int str[n];
	bool mat[n+1][sum+1];
	for(int i=0;i<n;i++)cin>>str[i];
	for(int i=0;i<=n;i++)mat[i][0]=true;
	for(int i=1;i<=sum;i++)mat[0][i]=false;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(str[i-1]>j)mat[i][j]=mat[i-1][j];
			else
				mat[i][j]=(mat[i-1][j]||mat[i-1][j-str[i-1]]);
		}
	}
	return mat[n][sum];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(subsum(n,k))
			cout<<"YES!\n";
		else
			cout<<"NO!\n";

	}
}
/*
 * 2
3 10
8 3 2
2 20
11 11
 */
