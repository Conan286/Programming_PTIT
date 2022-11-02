#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
#define N 100001
using namespace std;
bool snt(ll n)
{
int k=(int)sqrt( n);
for(int i=2;i<=k;i++) 
if(n%i==0) 
return 0;
return n>1;
}

main()
{
//init();
int t,n;
ll l,r;
cin>>t;
while(t--)
{
cin>>l>>r;
int res=0;
for(int i=l;i<=r;i++)
if(snt(i))++res;
cout<<res<<endl;
}
}

