#include<bits/stdc++.h>
#define ll long long
#define N 1001
ll fib[N],mod=1e9+7;
using namespace std;
void init()
{
fib[0]=0;
fib[1]=1;
for(int i=2;i<N;i++) 
fib[i]=((fib[i-1]%mod)+(fib[i-2]%mod))%mod;
}
main()
{
init();
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<fib[n]<<endl;
}
}

