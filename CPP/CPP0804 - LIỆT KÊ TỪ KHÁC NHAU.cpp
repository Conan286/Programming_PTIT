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
fstream input;
input.open("VANBAN.in",ios::in);
vector<string>v;
set<string>se;
string s;
while(input>>s)
{
s=solve(s);
v.push_back(s);
}
sort(v.begin(),v.end());
for(auto x:v)
se.insert(x);
for(auto x:se)
cout<<x<<endl;
}
