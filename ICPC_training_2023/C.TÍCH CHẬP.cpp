#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
int t,n,m;
cin>>t;
ll ke[3][3],sum;
while(t--)
{
sum = 0;
cin>>n>>m;
ll a[n][m];
for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];
for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin>>ke[i][j];
//n-3+1 hang
//m-3+1 cot
//ma tran thu duoc la b[n-3+1][m-3+1]
for(int i=0;i<(n-3+1);i++)
for(int j=0;j<(m-3+1);j++)
for(int k=0;k<3;k++)
for(int h=0;h<3;h++)
sum+=ke[k][h]*a[i+k][j+h];
cout<<sum<<"\n";
}
}
