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
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
void nhap(int a[][101],int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
int count(int a[][101],int n)
{
int cnt=0;
set<int>s;
map<int,int>p;
for(int i=0;i<n;i++)
s.insert(a[0][i]);
for(int i=1;i<n;i++)
for(int j=0;j<n;j++)
for(auto x:s)
if(x==a[i][j]&&p[x]==i-1) 
p[x]++;
for(auto x:s)
if(p[x]==n-1) ++cnt;
return cnt;
}
main()
{
int t,n,x,k;
cin>>t;
while(t--)
{
cin>>n;
int a[n][101];
nhap(a,n);
cout<<count(a,n)<<endl;
}
}

