#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1001
using namespace std;
int sum[N];
void init()
{
sum[0]=0;
for(int i=1;i<N;++i) 
sum[i]=i+sum[i-1];
}
int solve(int n,ll k)
{
if(n<k) return sum[n];
int x=n%k,y=n/k;
return (y*sum[k-1]+sum[x]);
//n>=k
//10 11
//->55
//11 11
//->55
//12->11
//56
//13->11
//57
}

main()
{
init();
int t;
int a,m, n,p;
ll k;
cin>>t;
while(t--)
{
cin>>n>>k;
if(k==solve(n,k)) puts("1");
else puts("0");
}
}

