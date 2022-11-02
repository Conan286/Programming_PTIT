#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long

#define yes puts("YES");
#define no puts("NO");
ll mod= 1000000007;
inline ll luythua(ll a,ll b)
{
if(b==1) return a%mod;
ll lt=luythua(a,b/2);
if(b&1) return lt%mod*lt%mod*a%mod;
else return lt%mod*lt%mod;
}
using namespace std;
inline ll dao(ll a)
{
ll s=0;
while(a)
{
s=s*10+a%10;
a/=10;
}
return s;
}
int main()
{
    int t = 0;
    ll n, p;
    cin >> t;
    while(t--)
    {
        cin >> n;
        p = dao(n);
        cout << luythua(n, p) << endl;
    }
    return 0;
}
