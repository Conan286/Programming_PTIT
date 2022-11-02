#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 10001
using namespace std;
int u[N],nt[N];
void sinhnt()
{
memset(nt,0,sizeof(nt));
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
nt[j]=1;
}
int res(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0) return i;
}
}
void init()
{
u[1]=1;
for(int i=3;i<N;i+=2){
if(!nt[i]) u[i]=i;
else u[i]=res(i);
}
}
void solve(int n)
{
for(int i=1;i<=n;i++)
{
if(i%2==0) cout<<2<<" ";
else cout<<u[i]<<" ";
}
cout<<endl;
}
main()
{
int t,n;
sinhnt();
init();
cin>>t;
while(t--)
{
cin>>n;
solve(n);
}
}



