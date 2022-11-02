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
int l=0,r=n-1;
while(l<r)
{
cout<<a[r--]<<" "<<a[l++]<<" ";
}
if(n%2!=0) cout<<a[n/2];
cout<<endl;
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
sort(a,a+n);
print(a,n);
}
}

