#include<iostream>
#include<cstring>
#include<string>
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
#define N 20001
#define yes puts("YES");
#define no puts("NO");
#define Impossible puts("Impossible");
using namespace std;
ll count(ll b,ll p)
{
ll cnt=0,lim;
for(ll i=1;i<p;i++)
{
lim=0;
if((i*i)%p==1){
lim=i+p*(b/p);
if(lim>b) lim=lim-p;
cnt+=(lim-i)/p+1;
}
}
return cnt;
}
main()
{
int t;
cin>>t;
ll b,p;
while(t--)
{
cin>>b>>p;
cout<<count(b,p)<<endl;
}
}
