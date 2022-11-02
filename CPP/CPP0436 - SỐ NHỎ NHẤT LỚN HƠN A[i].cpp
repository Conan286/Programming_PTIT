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
map<int,int>p;
p.clear();
int a[n],b[n];
for(int i=0;i<n;i++) {
cin>>a[i];
b[i]=a[i];
}
sort(a,a+n);
for(int i=1;i<n;i++)
{
if(p[a[i-1]]==0&&a[i]>a[i-1])
 p[a[i-1]]=a[i];
}
for(int i=0;i<n;i++){
if(!p[b[i]]) cout<<"_"<<" ";
else cout<<p[b[i]]<<" ";
}
cout<<endl;
}
}

