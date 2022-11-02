#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
ll gcd(ll a, ll b){
if(a%b==0) return b;
else return gcd(b,a%b);
}
ll lcm(ll a,ll b){
return a/gcd(a,b) *b;
}
void solve(ll a,ll b)
{
cin>>a>>b;
cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
}
main()
{
int t;
ll a,b;
cin>>t;
while(t--)
solve(a,b);
}


