#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(string s)
{
stack<char>stk;
for(int i=0;i<s.size();i++)
{
if((s[i]=='[')||(s[i]=='(')||(s[i]=='{')) stk.push(s[i]);
if((stk.size()==0&&((s[i]==']')||(s[i]==')')||(s[i]=='}')))||((s[i]==']'&&stk.top()!='[')||(s[i]==')'&&stk.top()!='(')||(s[i]=='}'&&stk.top()!='{')) ) return 0;
if((s[i]==']'&&stk.top()=='[')||(s[i]==')'&&stk.top()=='(')||(s[i]=='}'&&stk.top()=='{')) stk.pop();

}
return stk.size()==0;
}
int main()
{
int t,n;
string s;
cin>>t;
while(t--)
{
cin>>s;
if(check(s)) cout<<"YES\n";
else cout<<"NO\n";
}
}

