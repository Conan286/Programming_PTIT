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
#define N 10001
using namespace std;
//bool isdigit()
string solve(string s)
{
string str="";
int n=s.size(),num=0;
vector<char>v;
v.clear();
for(int i=0;i<n;i++)
{
if(isdigit(s[i]))
num+=(s[i]-'0');
else 
v.push_back(s[i]);
}
sort(v.begin(),v.end());
for(auto k:v)
str+=k;
str+=to_string(num);
return str;
}
main()
{
int t,n,k;
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<solve(s)<<endl;
}
}

