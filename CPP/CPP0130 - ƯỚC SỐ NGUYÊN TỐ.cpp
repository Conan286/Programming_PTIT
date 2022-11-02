#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
using namespace std;
void solve(ll n)
{
for(int i=2;i<=(int)sqrt(n);i++)
while(n%i==0){
cout<<i<<" ";
n/=i;
}
if(n!=1) cout<<n;
puts("");
}
main()
{
int t;
ll n;
cin>>t;
while(t--)
{
cin>>n;
solve(n);
}
}

