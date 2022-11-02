#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define getstr(s) getline(cin,s);
#define clearstr(); cin.ignore(200, '\n');
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void solve(int a[],int b[],int m,int n)
{
set<int >hop;
map<int,int>giao;
hop.clear();
giao.clear();
for(int i=0;i<m;i++) 
{
hop.insert(a[i]);
giao[a[i]]++;
}
for(int i=0;i<n;i++) hop.insert(b[i]);
for(auto x:hop) cout<<x<<" ";
cout<<endl;
for(int i=0;i<n;i++)
if(giao[b[i]]>0) cout<<b[i]<<" ";
cout<<endl;
}
main()
{
int t,m,n;
cin>>t;
while(t--)
{
cin>>m>>n;
int a[m],b[n];
nhap(a,m);
nhap(b,n);
sort(a,a+m);
sort(b,b+n);
solve(a,b,m,n);
}
}


