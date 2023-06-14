#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=n;i++) a[i]=0;
}
void sinh()
{
int j=n;
while(a[j]==1&&j>0){ a[j]=0; j--;}
if(j==0) ok=0;
else{
a[j]=1;
}
}
bool check()
{
int cnt=0;
for(int i=1;i<=n;i++)
if(a[i])++cnt;
return k==cnt;
}
void in()
{
for(int i=1;i<=n;i++ ) cout<<a[i]; cout<<"\n";
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
vector<string>v;
cin>>n>>k;
ktao();
while(ok)
{
if(check()) in();
sinh();
}
for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
}
