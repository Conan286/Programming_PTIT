#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N 1000001
using namespace std;
void solve(ll n)
{
int res=2;
for(int i=2;i<=(int)sqrt(n);i++)
while(n%i==0){
//cout<<i<<" ";
n/=i;
res=i;
}
cout<<(n>res?n:res)<<endl;
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

