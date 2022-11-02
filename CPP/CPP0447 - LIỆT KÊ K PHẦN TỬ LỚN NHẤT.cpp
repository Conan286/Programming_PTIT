#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
bool cmp(int a,int b)
{
return a>b;
}
main()
{
int t,m,n,x=0,k;
cin>>t;
set<int>s;
while(t--)
{
cin>>n>>k;

int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n,cmp);
for(int i=0;i<k;i++) cout<<a[i]<<" ";
cout<<endl;
}
}


