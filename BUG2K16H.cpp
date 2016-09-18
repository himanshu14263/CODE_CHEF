#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[26];
char alpha[]={"abcdefghijklmnopqrstuvwxyz"};
int main()
{
	ll t;
	cin>>t;
	string s;
	while(t--)
	{
		memset(a,0,sizeof(a));
		cin>>s;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
			a[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(a[i])
			{
				if(a[i]==1)
					cout<<alpha[i];
				else
				{
					cout<<alpha[i]<<a[i];
				}
			}
 
		}
		cout<<"\n";
 
	}
}