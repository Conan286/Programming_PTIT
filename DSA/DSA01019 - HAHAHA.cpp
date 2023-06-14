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
if(a[1]!=1||a[n]!=0) return 0;
for(int i=1;i<n;i++) if(a[i]==1&&a[i+1]==1) return 0;
return 1;
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
cin>>n;
ktao();
while(ok)
{
string s="";
if(check()) {for(int i=1;i<=n;i++) { if(a[i]) s+="H"; else s+="A";} v.push_back(s);}
sinh();
}
for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";

}
}
