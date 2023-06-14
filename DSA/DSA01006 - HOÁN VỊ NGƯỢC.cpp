#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=n;i++) a[i]=i;
}
void sinh()
{
int j=n-1;
while(a[j]>a[j+1]&&j>0) j--;
if(j==0) ok=0;
else{
int i=n;
while(a[j]>a[i]) i--;

swap(a[i],a[j]);
reverse(a+j+1,a+n+1);
}
}
void in()
{
for(int i=1;i<=n;i++ ) cout<<a[i]; cout<<" ";
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
vector<string>v;
cin>>n;
ktao();
while(ok)
{
string s="";
for(int i=1;i<=n;i++) s+=to_string(a[i]);
v.push_back(s);
sinh();
}
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
cout<<endl;
}
}
