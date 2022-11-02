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

using namespace std;
bool chiahet(string a,ll k)
{
int n=a.length();
ll x=0;
for(int i=0;i<n;i++)
x=(x*10+(a[i]-'0'))%k;
return x==0;
}
ll solve(string a,ll b)
{
vector<ll>v;
v.clear();
for(int i=2;i<=sqrt(b);i++)
{
if(b%i!=0) continue;
else v.push_back(i),v.push_back(b/i);
}
sort(v.begin(),v.end());
for(int i=v.size()-1;i>=0;i--)
if(chiahet(a,v[i])) return v[i];
return 1;
}
int main()
{
int t;
ll a;
string b;
cin>>t;
while(t--)
{
cin>>a>>b;
cout<<solve(b,a)<<endl;
}
}




