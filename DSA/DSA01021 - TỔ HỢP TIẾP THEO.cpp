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
cin>>n>>k;
int a[k+1];
map<int,int>mp;
for(int i=1;i<=k;i++) { cin>>a[i]; mp[a[i]]++;}
int j=k;
while(a[j]==n-k+j&&j>0) j--;
if(j==0) cout<<k<<endl;
else {
	a[j]++;
	for(int i=j+1;i<=k;i++) a[i]=a[i-1]+1;
	int cnt=0;
	for(int i=1;i<=k;i++) if(mp[a[i]]<1) ++cnt;
	cout<<cnt<<endl;
}
}
}
