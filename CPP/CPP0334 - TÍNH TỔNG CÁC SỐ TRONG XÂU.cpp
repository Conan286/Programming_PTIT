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
bool isdigit(char s)
{
return (s>='0'&&s<='9');
}
ll solve(string s)
{
ll x=0;
int n=s.size();
for(int i=0;i<n;i++)
{
if(isdigit(s[i]))
{
ll k=0;
while(isdigit(s[i]))
{
k=k*10+(s[i++]-'0');
}
x+=k;
}
else continue;
}
return x;
}
main()
{
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<solve(s)<<endl;
}
}
