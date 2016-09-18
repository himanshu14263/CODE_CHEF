#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int t;
	cin>>t;
	a[0]=1;
	for(int i=1;i<10005;i++)
		a[i]=a[0]+i*9;
	int p=0;
	while(t--)
	{
		p++;
		int n;
		cin>>n;
		int cnt=1;
		int cmp=a[0];
		int i=1;
		while(cmp<n)
		{
			cmp+=a[i];
			cnt++;
			i++;
		}
		cout<<"Case #"<<p<<": "<<cnt<<"\n";
	}
}