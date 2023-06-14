#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=k;i++) a[i]=i;
}
void sinh()
{
int j=k;
while(a[j]==n-k+j&&j>0){  j--;}
if(j==0) ok=0;
else{
a[j]++;
for(int i=j+1;i<=k;i++) a[i]=a[i-1]+1;
}
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
cin>>n>>k;
int b[k+1];
for(int i=1;i<=k;i++) { cin>>b[i]; }
int cnt=1,ans=1;
ktao();
while(ok)
{
int dem=0;
for(int i=1;i<=k;i++) if(a[i]==b[i])++dem;

if(dem==k) {ans=cnt; break;}
++cnt;
sinh();
}
cout<<ans<<endl;
}
}
