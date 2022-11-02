#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
ll solve(ll a,ll b,ll c)
{
if(b==0) return 0;
if(b==1) return a%c;
if(b%2!=0) return (2*solve(a,b/2,c)+a)%c;
else return  (2*solve(a,b/2,c))%c;
}
main()
{
int t;
ll a,b,c;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
cout<<solve(a,b,c)<<endl;
}
}

