#include<bits/stdc++.h>
#include<deque>
#include<set>
#include<cstring>
#include<vector>
#define ll long long
using namespace std;
int a[1001],n,sum,ok=1;
void ktao()
{
for(int i=0;i<n;i++) a[i]=0;
}
void sinh()
{
	int i=n-1;
	while(i>=0 and a[i]){
	a[i]=0;
	i--;
	}
	if(i<0) ok=0;
    else a[i]=1;
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
cin>>n>>sum;
int x[n];
vector<string>v;
for(int i=0;i<n;i++) cin>>x[i];
sort(x,x+n);
ktao();
while(ok)
{
int sum2=0;
for(int i=0;i<n;i++) if(a[i])  sum2+=x[i];
if(sum2==sum)
{
//for(int i=0;i<n;i++) if(a[i]) cout<<x[i]<<" "; cout<<endl;
string s="[";
for(int i=0;i<n;i++) if(a[i])
s+=to_string(x[i])+" ";
s+="]";
s.erase(s.end()-2);
v.push_back(s);
}
sinh();
}
if(v.size()==0) cout<<-1;
else for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
cout<<endl;
}
}

