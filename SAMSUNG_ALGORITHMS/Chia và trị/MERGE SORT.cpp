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
#define ll long long
#define none puts("NONE");
using namespace std;
main()
{
int t,n,x;
cin>>t;
while(t--)
{
cin>>n;
multiset<int>mts;
for(int i=0;i<n;i++){
cin>>x;
mts.insert(x);
}
for(auto k:mts) cout<<k<<" "; cout<<endl;
}
}

