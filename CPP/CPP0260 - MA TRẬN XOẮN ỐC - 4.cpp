#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
using namespace std;
void xoanoc(int a[][1001],vector<int>&v,int n)
{
int arr[n*n],cnt=0;
int h1=0,c1=0,h2=n-1,c2=n-1;
while(cnt<n*n){
for(int i=c1;i<=c2;i++)
a[h1][i]=v[cnt++];
for(int i=h1+1;i<=h2;i++)
a[i][c2]=v[cnt++];
if(h1<h2){
for(int i=c2-1;i>=c1;i--) a[h2][i]=v[cnt++];
}
if(c1<c2)
{
for(int i=h2-1;i>h1;i--) a[i][c1]=v[cnt++];
}
++h1,++c1,--h2,--c2;
}
cout<<endl;
}
void output(int a[][1001],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
main()
{
int t,n,k,m;
vector<int>v;
v.clear();
cin>>n;
int a[n][1001];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{
cin>>a[i][j];
v.push_back(a[i][j]);
}
sort(v.begin(),v.end());
xoanoc(a,v,n);
output(a,n);
}




