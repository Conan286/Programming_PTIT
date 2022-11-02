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
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
nt[j]=1;
}
int sum(int n)
{
int s=0;
while(n!=0) {
s+=n%10;
n/=10;
}
return s;
}
bool check(int n)
{
if(!nt[n]) return 0;
int s1=sum(n),s2=0;
for(int i=2;i<=sqrt(n);i++)
while(n%i==0) {
s2+=sum(i);
n/=i;
}
if(n!=1) s2+=sum(n);
return s1==s2;
}
void solve(int n)
{
if(check(n)) yes
else no
}
main()
{
int t,n;
ll l,r;
sinhnt();
cin>>t;
//for(int i=0;i<101;i++) cout<<i<<" "<<c[i]<<endl;
while(t--)
{
cin>>n;
solve(n);
}
}



