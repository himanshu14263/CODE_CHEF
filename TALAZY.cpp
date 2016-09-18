#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f(ll n,ll b,ll m)
{
	ll ans=0;
	if(n==0)
		return 0;
	else if(n==1)
		return m;
 
		ll x;
		if(n&1)
			x=(n+1)/2;
		else
			x=n/2;
		ans=(x*m)+b;
	return ans + f(n-x,b,2*m);
}
int main()
{
	ll t,n,b,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>b>>m;
		 cout<<f(n,b,m)<<"\n";
	}
}