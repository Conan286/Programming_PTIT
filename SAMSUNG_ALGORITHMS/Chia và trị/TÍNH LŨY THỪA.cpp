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
#define mod 1000000007
ll luythua(ll a,ll b)
{
if(b==0) return 1;
else if(b==1) return a%mod;
else if(b%2==0) return (luythua(a,b/2)%mod*luythua(a,b/2)%mod)%mod;
else return (a%mod*luythua(a,b/2)%mod*luythua(a,b/2)%mod)%mod;
}
using namespace std;
int main()
{
ll a,b;
while(cin>>a>>b)
{
if(a==0 and b==0) break;
cout<<luythua(a,b)<<endl;
}
}


