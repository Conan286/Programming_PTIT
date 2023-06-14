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
int i=k;
while(a[i]==n-k+i&&i>0) i--;
if(i==0) ok=0;
else
{
a[i]++;
for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
}
}
void in()
{
for(int i=1;i<=k;i++ ) cout<<a[i]; cout<<" ";
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
cin>>n>>k;
ktao();
while(ok)
{
in();
sinh();
}
cout<<endl;
}
}
