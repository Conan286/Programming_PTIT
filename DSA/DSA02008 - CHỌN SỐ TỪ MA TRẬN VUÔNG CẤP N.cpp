#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,sum,dem=0;
int check[101][101],a[101][101],h[101],c[101];
vector<string>v;
void Ptit(int i)
{
for(int j=1;j<=n;j++)
{
if(i==n+1)
{
int s=0;
string s1="";
for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if(check[i][j]) s+=a[i][j];
if(s==sum){ for(int i=1;i<=n;i++) {for(int j=1;j<=n;j++) if(check[i][j]) {s1+=to_string(j)+" "; } }
v.push_back(s1);
}
return;
}
if(!h[i] && !c[j] && !check[i][j])
{
h[i]=c[j]=check[i][j]=1;
Ptit(i+1);
h[i]=c[j]=check[i][j]=0;
}
}
}
int main()
{
cin>>n>>sum;

for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
memset(check,0,sizeof(check)); memset(h,0,sizeof(h)); memset(c,0,sizeof(c));
vector<int>vt;
Ptit(1);
cout<<v.size()<<"\n";
for(string str:v) cout<<str<<"\n";
}

