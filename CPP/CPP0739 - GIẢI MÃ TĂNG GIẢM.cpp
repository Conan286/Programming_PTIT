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
string solve(string s);
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
string solve(string s)
{
string res="";
int n=s.length();
stack<int>stk;
for(int i=0;i<=n;i++)
{
stk.push(i+1);
if(s[i]=='I'||i==n)
while(!stk.empty())
res+=to_string(stk.top()),stk.pop();
}
return res;
}

