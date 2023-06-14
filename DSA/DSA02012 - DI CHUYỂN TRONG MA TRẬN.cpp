#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll C(int a,int b)
{
int ans=1;
for(int i=a+1;i<=b;i++){
ans*=i;
ans/=(i-a);
}
return ans;
}
int main()
{
int t,m,n;
cin>>t;
while(t--)
{
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
	int x=min(m,n);
	cout<<C(x-1,m-1+n-1)<<endl;
}
}
//5c2=10
// 5!/1*2

