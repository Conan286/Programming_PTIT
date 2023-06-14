#include<bits/stdc++.h>
using namespace std;
int bfs(int n)
{
deque<pair<int,int>>dq;
dq.push_back({n,0});
set<int>se;
se.insert(n);
while(dq.size())
{
pair<int,int> top = dq.front();
dq.pop_front();
int ft=top.first,sd=top.second;
if(ft==1) return sd;
dq.push_back({ft-1,sd+1});
if(se.find(ft-1)==se.end())
se.insert(ft-1);
int k=sqrt(ft);
for(int i=2;i<=k;i++)
	if(ft%i==0 && se.find(ft/i)==se.end()){
	se.insert(ft/i);
	 dq.push_back({ft/i,sd+1});
 }
}
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
cout<<bfs(n)<<"\n";
}
}
