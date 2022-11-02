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
#define yes puts("YES");
#define no puts("NO");
using namespace std;

void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(ll a[],int n)
{
set<int>p;
for(int i=0;i<n;i++)
{
ll x=a[i];
while(x!=0)
{
p.insert(x%10);
x=x/10;
}
}
for(auto k:p) cout<<k<<" ";
cout<<endl;
}
main()
{
int t,n,x;
cin>>t;
while(t--){
cin>>n;
ll a[n];
nhap(a,n);
solve(a,n);
}
}
