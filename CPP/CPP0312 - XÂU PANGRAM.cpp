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
using namespace std;

bool check(string s,int k)
{
int n=s.size();
set<char>p;
for(int i=0;i<n;i++)
p.insert(s[i]);
return (26-p.size()<=k);
}
main()
{
int t,k;
string s;
cin>>t;
while(t--)
{
cin>>s>>k;
cout<<check(s,k)<<endl;
}
}
