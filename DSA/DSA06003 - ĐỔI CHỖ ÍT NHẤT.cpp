#include<bits/stdc++.h>
#define ll long long
using namespace std;
int doichoitnhat(int a[],int n);
int main()
{
	int t,n,s,m;
	cin>>t;
	while(t--)
	{
	cin>>n; int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<doichoitnhat(a,n)<<endl;
	}
}
int doichoitnhat(int a[],int n)
{
int cnt=0;
for(int i=0;i<n;i++)
{
int diemnhan=a[i],id=i;
for(int j=i+1;j<n;j++)
if(a[j]<diemnhan)
{
	diemnhan=a[j];
	id=j;
}
if(id!=i)
{
swap(a[id],a[i]);++cnt;

}
}
return cnt;
}

