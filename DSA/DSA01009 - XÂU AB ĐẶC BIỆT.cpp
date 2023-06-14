#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1,dem=0;
char s[101];
vector<string>v;
bool check()
{
int dpa[n+1],dk=0;
for(int i=1;i<=n;i++) {
if(s[i]=='A') dpa[i]=1;
else dpa[i]=0;
}
for(int i=2;i<=n;i++)
if(s[i]=='A' and s[i-1]=='A') dpa[i]=dpa[i-1]+1;
for(int i=1;i<=n;i++){
if(dpa[i]==k) {
dk=1;
}
if(dpa[i]>k) return 0;
}
return dk==1;
}
void ktao()
{
for(int i=1;i<=n;i++) s[i]='A';
}
void sinh()
{
int i=n;
while(s[i]=='B' and i>0) s[i--]='A';
if(i==0) ok=0;
else s[i]='B';
}
void in()
{
string str="";
for(int i=1;i<=n;i++) str+=s[i];
v.push_back(str);
}
int main()
{
	cin>>n>>k;
	ktao();
	while(ok)
	{
	if(check())
	in();
	sinh();
	}
	cout<<v.size()<<endl;
	for(string c:v)
	cout<<c<<endl;
}

