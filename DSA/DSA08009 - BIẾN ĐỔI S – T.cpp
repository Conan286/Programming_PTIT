#include<bits/stdc++.h>
using namespace std;
int a,b;
map<int,int>vs;
map<int,int>cnt;
int bfs(int x)
{
deque<int>dq;
dq.push_back(x);
vs[x]=1;
while(dq.size())
{
x=dq.front();
dq.pop_front();
if(x==b) return cnt[x];
if(x*2==b||x-1==b) return cnt[x]+1;
if(x-1>0&&!vs[x-1]){
cnt[x-1]=cnt[x]+1;
vs[x-1]=1;
dq.push_back(x-1);
}
if(x<b&&!vs[x*2]){
cnt[x*2]=cnt[x]+1;
vs[x*2]=1;
dq.push_back(x*2);
}
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
vs.clear();
cnt.clear();
cin>>a>>b;
cout<<bfs(a)<<"\n";
}
}
