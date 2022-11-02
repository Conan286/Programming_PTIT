#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
using namespace std;
void input(int a[][1001],int m,int n)
{
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
 cin>>a[i][j];
}
void xoanoc(int a[][1001],int m,int n)
{
int arr[m*n],cnt=0;
int h1=0,c1=0,h2=m-1,c2=n-1;
while(cnt<m*n){
for(int i=c1;i<=c2;i++)
cout<<a[h1][i]<<" ",++cnt;
for(int i=h1+1;i<=h2;i++)
cout<<a[i][c2]<<" ",++cnt;
if(h1<h2){
for(int i=c2-1;i>=c1;i--) cout<<a[h2][i]<<" ",++cnt;
}
if(c1<c2)
{
for(int i=h2-1;i>h1;i--) cout<<a[i][c1]<<" ",++cnt;
}
++h1,++c1,--h2,--c2;
}
cout<<endl;
}
main()
{
int t,n,k,m;
cin>>t;
while(t--)
{
cin>>m>>n;
int a[m][1001];
input(a,m,n);
xoanoc(a,m,n);
}
}


