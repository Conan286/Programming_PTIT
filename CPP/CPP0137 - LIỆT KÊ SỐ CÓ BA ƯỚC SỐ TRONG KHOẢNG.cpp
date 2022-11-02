#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
using namespace std;
int nt[N],c[N];
void sinhnt()
{
memset(nt,0,sizeof(nt));
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
nt[j]=1;
memset(c,0,sizeof(c));
c[0]=c[1]=0;
for(int i=2;i<N;i++) {
if(!nt[i]) c[i]=c[i-1]+1;
else c[i]=c[i-1];
}
}
int solve(ll l,ll r)
{
int k=(int )sqrt(r),h=(int )sqrt(l);
return c[k]-c[h];

}
main()
{
int t;
ll l,r;
sinhnt();
cin>>t;
//for(int i=0;i<101;i++) cout<<i<<" "<<c[i]<<endl;
while(t--)
{
cin>>l>>r;
cout<<solve(l,r)<<endl;
}
}



