#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1,a[101];
void ktao()
{
for(int i=0;i<=k;i++) a[i]=i;
}
void sinh()
{
int i=k;
while(a[i]==n-k+i&&i>0)i--;
if(i==0) ok=0;
else{
a[i]++;
for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>k;
ok=1;
vector<char>v;
char x=char(64);
v.push_back(x);
for(int i=1;i<=n;i++) v.push_back(char(x+i));

ktao();

while(ok)
{
for(int i=1;i<=k;i++) cout<<v[a[i]]; cout<<endl;
sinh();
}
}
}
