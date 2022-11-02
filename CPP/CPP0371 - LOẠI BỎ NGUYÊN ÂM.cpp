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
string solve(string a)
{
string s=a,str=".";
int n=s.size();
for(int i=0;i<n;i++)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
vector<char>v;
for(int i=0;i<n;i++)
if(s[i]!='a'&&s[i]!='i'&&s[i]!='e'&&s[i]!='y'&&s[i]!='o'&&s[i]!='u')
v.push_back(s[i]);
n=v.size();
for(int i=0;i<n-1;i++){
str+=v[i];
str+=".";
}
str+=v[n-1];
return str;
}
main()
{
int t,n;
string a,b;
cin>>a;
cout<<solve(a)<<endl;
}
