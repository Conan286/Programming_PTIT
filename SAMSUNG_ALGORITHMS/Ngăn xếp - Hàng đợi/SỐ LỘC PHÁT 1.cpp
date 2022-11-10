//B21DCCN441
#include<iostream>
#include<cstring>
#include<map>
#include <iomanip>
#include<vector>
#include<algorithm>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define run(t) cin>>t; while(t--)
#include<stack>
#include<deque>
using namespace std;
void solve(int n)
{
deque<string>v;
stack<string>stk;
v.push_back("");
while(!v.empty())
{
string s=v.back();
v.pop_back();
stk.push(s);
if(s.size()==n) continue;
v.push_front(s+"6");
v.push_front(s+"8");
}

while(!stk.empty())
{
cout<<stk.top()<<" ";
stk.pop();
}
cout<<endl;
}
int main()
{
int t,n;
run(t)
{
cin>>n;
solve(n);
}
}
