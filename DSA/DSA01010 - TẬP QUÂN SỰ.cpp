#include<bits/stdc++.h>
using namespace std;
int n,k,a[101];
int answer()
{
int i=k,cnt=0;
set<int>sa;
for(int i=1;i<=k;i++) sa.insert(a[i]);
while(a[i]==n-k+i && i>0)
{
i--;
}
if(i==0) return k;
else{
a[i]++;
for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
for(int i=1;i<=k;i++) if(sa.find(a[i])==sa.end())++cnt;
return cnt;
}
return cnt;
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>k;
for(int i=1;i<=k;i++) cin>>a[i];
cout<<answer()<<"\n";
}
}
