#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int find(int a[],int b[],int n)
{
for(int i=0;i<n-1;i++) if(a[i]!=b[i]) return i;
return n-1;
}
main()
{
int t,m,n,k;
cin>>t;
while(t--)
{
vector<int>v;
v.clear();
cin>>n>>m>>k;
int a[n],b[m];
input(a,n);
input(b,m);
for(int i=0;i<n;i++) v.push_back(a[i]);
for(int i=0;i<m;i++) v.push_back(b[i]);
sort(v.begin(),v.end());
cout<<v[k-1]<<endl;

}
}
