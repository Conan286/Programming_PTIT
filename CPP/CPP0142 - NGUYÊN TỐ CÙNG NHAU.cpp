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
int gcd(int a,int b)
{
if(a%b==0) return b;
return gcd(b,a%b);
}
bool solve(int n)
{
int cnt=0;
for(int i=1;i<=n;i++) if(gcd(i,n)==1) ++cnt;
return (!nt[cnt]);
}
main()
{
int t,n;
sinhnt();
cin>>t;
while(t--)
{
cin>>n;
cout<<solve(n)<<endl;
}
}



