#include<bits/stdc++.h>
#include<set>
#include<vector>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
#define N 100001
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(int a[],int n)
{
int l=0,r=n-1;
while(l<r) cout<<a[r--]<<" "<<a[l++]<<" ";
if(n%2!=0) cout<<a[n/2];
cout<<endl;
}
main()
{
int t,n;
cin>>t;
map<int,int >c;
while(t--)
{
cin>>n;
int a[n];
input(a,n);
sort(a,a+n);
solve(a,n);
}
}
