#include<iostream>
#include<cstring>
#include <iomanip>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
using namespace std;
ll mod=1e9+7;
ll qhd(int n,int k)
{
ll F[100005];
memset(F,0,sizeof(F));
F[0]=F[1]=1;
for(int i=2;i<k;i++)
for(int j=0;j<i;j++)
F[i]=(F[i]+F[j])%mod;
for(int i=k;i<=n;i++)
for(int j=1;j<=k;j++)
F[i]=(F[i]+F[i-j])%mod;
return F[n];
}
main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
cout<<qhd(n,k)<<endl;
}
}
