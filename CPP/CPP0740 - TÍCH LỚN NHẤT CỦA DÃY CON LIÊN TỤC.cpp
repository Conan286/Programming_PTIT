#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
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
ll solve(ll a[],int n)
{
ll res=0;
for(int i=0;i<n;i++){
ll m=1;
for(int j=i;j<n;j++){
m*=a[j];
res=max(res,m);
}
}
return res;
}
main()
{
int t,n;
cin>>t;
while(t--)
{
int n;
cin>>n;
ll a[n];
nhap(a,n);
cout<<solve(a,n)<<endl;
}
}
