#include<iostream>
#include<stack>
#include<deque>
#define run(t) cin>>t; while(t--)
using namespace std;
void solocphat(int n)
{
stack<string>ans;
deque<string>deq;
deq.push_back("");
while(!deq.empty())
{
string s=deq.back();
ans.push(s);
deq.pop_back();
if(s.size()==n) continue;
deq.push_front(s+"6");
deq.push_front(s+"8");
}
cout<<ans.size()-1<<"\n";
while(!ans.empty())
{
cout<<ans.top()<<" ";
ans.pop();
}
cout<<"\n";
}
main()
{
int t,n;
run(t)
{
cin>>n;
solocphat(n);
}
}
