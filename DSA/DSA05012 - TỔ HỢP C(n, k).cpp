#include<bits/stdc++.h>
#define ll long long
#define N 1005
using namespace std;
ll C[N][N];
ll m=1000000007;
void init()
{
	for(int i=0;i<1001;i++) C[i][0]=1;
	for(int i=1;i<1001;i++) C[i][i]=1;
	for(int i=1;i<1001;i++)
	for(int j=1;j<i;j++) C[i][j]=(C[i-1][j-1]+C[i-1][j])%m;
}
int main()
{
int t,n,k;
init();
cin>>t;
while(t--)
{
	cin>>n>>k;
	cout<<C[n][k]<<"\n";
}
}
