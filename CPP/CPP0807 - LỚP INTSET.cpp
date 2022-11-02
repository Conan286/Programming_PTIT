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
#define N 10001
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;
bool cmp(string a,string b)
{
return a<b;
}
string solve(string s)
{
int n=s.size();
string str="";
for(int i=0;i<n;i++)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
str=s;
return str;
}
main()
{
fstream in1,in2;
in1.open("DATA.in");
int m,n,x,cnt=0;
set<int>s1;
set<int>s2;
in1>>m,in1>>n;
while(in1>>x)
{
++cnt;
if(cnt<=m) s1.insert(x);
else s2.insert(x);
}
for(auto k:s1)
{
if(s2.find(k)!=s2.end())
cout<<k<<" ";
}
}

