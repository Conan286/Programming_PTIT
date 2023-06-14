#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
int a[101],x[101];
vector<string>v;
bool check()
{
vector<int>vl;
vl.clear();
for(int i=1;i<=n;i++)
if(a[i])
vl.push_back(x[i]);
for(int i=1;i<vl.size();i++)
if(vl[i]<=vl[i-1]) return 0;
return vl.size()>1;
}
void ktao()
{
for(int i=0;i<=n;i++) a[i]=0;
}
void sinh()
{
int i=n;
while(a[i]==1 and i>0){
a[i]=0;
i--;
}
if(i==0) ok=0;
else a[i]=1;
}
void in()
{
string s="";
//for(int i=1;i<=n;i++)
//cout<<x[i]<<" ";
//cout<<endl;
//for(int i=1;i<=n;i++)
//cout<<a[i]<<" ";
//cout<<endl;
for(int i=1;i<=n;i++)
if(a[i]){
s+=to_string(x[i]); s+=" ";}
v.push_back(s);
}
int main()
{
cin>>n;
for(int i=1;i<=n;i++) cin>>x[i];
ktao();
while(ok)
{
	if(check())
	in();
	sinh();
	
}
sort(v.begin(),v.end());
for(string mp:v) cout<<mp<<endl;
}
