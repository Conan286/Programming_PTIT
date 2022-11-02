#include<bits/stdc++.h>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
using namespace std;
main()
{
int t,n;
cin>>t;
while(t--)
{
int cnt=0,check=0;
cin>>n;
int v[n];
for(int i=0;i<n;i++) 
cin>>v[i];
int k=v[0];
for(int i=1;i<n;i++)
if(v[i]!=v[i-1])
check=1;
for(auto x:v) k=max(k,x);
for(int j=1;j<=k;j++)
{
int cnt2=0,d=v[0]%j;
for(int i=1;i<n;i++){
if(v[i]%j==d) cnt2++;
else break;
}
if(cnt2==n-1) cnt++;
}
if(!check)cout<<0<<endl;
else cout<<cnt<<endl;
}
}
