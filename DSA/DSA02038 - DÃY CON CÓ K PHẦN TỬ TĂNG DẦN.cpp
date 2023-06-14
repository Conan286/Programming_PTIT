#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],ok=1,x[101];
void Try(int i)
{
for(int j=x[i-1]+1;j<=x[n-k+i];j++)
{
	x[i]=j;
	if(i==k)
	{
	for(int h=1;h<=k;h++) cout<<a[x[h]]<<" "; cout<<"\n";

	}
	else Try(i+1);
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>k;
for(int i=1;i<=n;i++) { cin>>a[i]; x[i]=i; }
sort(a+1,a+n+1);
ok=1;
Try(1);
}
}
