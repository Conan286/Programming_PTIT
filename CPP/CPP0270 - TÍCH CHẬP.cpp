#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#include<string.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define cin(a,b,c,d) cin>>a>>b>>c>>d;
using namespace std;
void nhap(int a[][301],int m,int n,int b[][3])
{
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
cin>>b[i][j];
}
ll convolution(int a[][301],int m,int n,int b[][3])
{
ll ans=0;
for(int i=0;i<m-2;i++)
for(int j=0;j<n-2;j++)
for(int k=0;k<3;k++)
for(int h=0;h<3;h++)
ans+=b[k][h]*a[k+i][h+j];
return ans;
}
int main()
{
int a[301][301],b[3][3];
int t,m,n;
cin>>t;
while(t--)
{
cin>>m>>n;
nhap(a,m,n,b);
cout<<convolution(a,m,n,b)<<endl;
}
}
