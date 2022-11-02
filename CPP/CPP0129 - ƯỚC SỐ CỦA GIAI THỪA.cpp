#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 100001
using namespace std;
int nt[N];
void sinhnt()
{
memset(nt,0,sizeof(nt));
nt[0]=nt[1]=1;
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
nt[j]=1;
}
int count(int a,int b)
{
int cnt=0;
while(a%b==0)
{
++cnt;
a/=b;
}
return cnt;
}
int solve(int n,int b)
{
int cnt=0;
for(int i=b;i<=n;i+=b)
cnt+=count(i,b);
return cnt;
}
main()
{
int t,n,p;
cin>>t;
while(t--)
{
cin>>n>>p;
cout<<solve(n,p)<<endl;
}
}



