#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include <algorithm>
#include<sstream>
#define ll long long
#define yes puts("Yes");
#define no puts("N/o");
#define N 1001
using namespace std;
ll sqr(ll x,ll m) {
    return ((x%m)*(x%m))%m;
}

ll pow(ll a, ll b, ll m) {
    if (b == 0) return 1 % m;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2),m) % m;
        else
            return ((a%m) * (sqr(pow(a, b/2),m) % m) %m);
}
ll solve(string a,ll b)
{
//(a^b)%m
//(a%m)^b
int n=a.size();
ll x=0;
for(int i=0;i<n;i++)
{
x=(x*10+(a[i]-'0'))%b;
}
return x;
//return pow(x,b,m);
}
main()
{
int t;
ll b,m;
string a;
cin>>t;
while(t--)
{
cin>>a;
cin>>b;
cout<<solve(a,b)<<endl;
}
}

