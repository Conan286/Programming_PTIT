#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
int snt[N];
 using namespace std;
 void init()
 {
 memset(snt,0,sizeof(snt));
 snt[0]=snt[1]=1;
 for(int i=2;i*i<N;i++)
 for(int j=i*i;j<N;j+=i)
 snt[j]=1;
 }
void solve(ll n,int k)
{
int cnt=0; 
ll u[101];
memset(u,0,sizeof(u));
for(int i=2;i<=sqrt(n);i++)
while(n%i==0) {
u[cnt++]=i;
n/=i;
}
if(n!=1) u[cnt++]=n;
if(k>cnt) puts("-1");
else cout<<u[k-1]<<endl;
}
main()
{
int t,k;
ll n;
cin>>t;
while(t--)
{
cin>>n>>k;
solve(n,k);
}
}

