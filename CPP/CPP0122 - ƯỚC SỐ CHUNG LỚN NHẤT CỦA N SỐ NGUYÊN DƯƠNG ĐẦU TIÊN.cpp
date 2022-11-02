#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
ll gcd(ll a, ll b){
if(a%b==0) return b;
else return gcd(b,a%b);
}
ll lcm(ll a,ll  b){
return a/gcd(a,b) *b;
}
void solve(ll n)
{
ll res=1;
for(ll i=2;i<=n;i++) res=lcm(res,i);
cout<<res<<endl;
}
main()
{
int t;
ll a,b,n;
cin>>t;
while(t--){
cin>>n;
solve(n);
}
}
