#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[100000];
int main()
{
	ll t;
	cin>>t;
	ll n,k;
	int p=0;
	while(t--)
	{
		p++;
		ll ans;
		cin>>n>>k;
		ans=(n*(n+1))/2;
		ll
		h=k;
		while(h<=n)
		{
			ans=ans-h;
			h*=k;
		}
		//cout<<ans<<"\n";
		cout<<"Case #"<<p<<": "<<ans<<"\n";
	}
}