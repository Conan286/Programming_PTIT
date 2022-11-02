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
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
ll solve(ll l[],int n)
{
ll res=1;
for(int i=0;i<n;i++)
res=max(res,l[i]);
return res;
}
ll qhd(ll a[],int n)
{
ll inc=a[0],enc=0;
for(int i=1;i<n;i++)
{
ll ninc=enc+a[i];
ll nenc=max(inc,enc);
inc=ninc;
enc=nenc;
}
return max(inc,enc);
}
main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
nhap(a,n);
cout<<qhd(a,n)<<endl;
}
}

