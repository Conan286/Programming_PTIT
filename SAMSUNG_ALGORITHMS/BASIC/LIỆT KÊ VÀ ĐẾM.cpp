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
using namespace std;
bool check(ll s)
{
while(s){
 int i=s%10;
 if(i!=2 and i!=3 and i!=5 and i!=7)
  return 0;
  s/=10;
}
return 1;
}
int main() {
map<ll,int>mp;
vector<ll>v;
ll s;
while(cin>>s)
{
if(check(s))
mp[s]++;
if(mp[s]==1) v.push_back(s);
}
for(auto x:v)
cout<<x<<" "<<mp[x]<<endl;
}


