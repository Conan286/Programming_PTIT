#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans(int n,int s,int m)
{
if(n<m||(((6*n)<(7*m)) && s>=7 ))return -1;
int c=s*m;
if(c%n==0) return c/n;
return (c/n)+1;
}
int main()
{
	int t,n,s,m;
	cin>>t;
	while(t--)
	{
	cin>>n>>s>>m;
	cout<<ans(n,s,m)<<endl;
	}
}

