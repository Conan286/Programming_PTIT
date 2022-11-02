#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
void print(ll a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
puts("");
}
void solve(ll a[],int n){
ll l[n];
l[0]=a[0]*a[1];
l[n-1]=a[n-1]*a[n-2];
for(int i=1;i<n-1;i++)
l[i]=a[i-1]*a[i+1];
for(int i=0;i<n;i++)
cout<<l[i]<<" ";
puts("");
}
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
ll a[n];
for(int i=0;i<n;i++) 
cin>>a[i];
solve(a,n);
}
}

