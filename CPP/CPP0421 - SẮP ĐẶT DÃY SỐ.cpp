#include<iostream>
#include <fstream>
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
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;
main()
{
int t,m,n; 
cin>>t;
set<ll>s;
while(t--)
{
s.clear();
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
cin>>a[i];
s.insert(a[i]);
}
for(int i=0;i<n;i++){
if(s.find(i)!=s.end())
cout<<i<<" ";
else cout<<"-1 ";
}
cout<<endl;
}
}

