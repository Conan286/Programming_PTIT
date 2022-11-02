#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
 cin>>a[i];
}
void solve(int a[],int n,int k)
{
int cnt=0;
for(int i=(k%n);cnt<n;i++)
{
if(i>=n) i=0;
cout<<a[i]<<" ";
++cnt;
}
cout<<endl;
}

main()
{
int t,n,cnt;
cin>>t;
map<int,int>p;
while(t--)
{
cnt=0;
cin>>n;
p.clear();
int a[n];
for(int i=0;i<n;i++){
 cin>>a[i];
 p[a[i]]++;
}
for(int i=0;i<n;i++) 
if(p[a[i]]>1){
cnt+=p[a[i]];
p[a[i]]=0;
}
cout<<cnt<<endl;
}
}

