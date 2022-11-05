#include<iostream>
#include<cstring>
#include <iomanip>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
using namespace std;
ll mod=1e9+7;
bool qhd(int a[],int n,int s)
{
int l[s+1];
memset(l,0,sizeof(l));
l[0]=1;
for(int i=0;i<n;i++)
for(int t=s;t>=a[i];t--)
if(l[t]==0 and l[t-a[i]])
l[t]=1;
return l[s];
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
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
if(qhd(a,n,k)) yes
else no
}
}
