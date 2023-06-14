#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
map<int,int>mp;
bool vs[1001];
void bfs(int nguon,int dich)
{
 if(vs[dich]) return;
 deque<int>q;
 q.push_back(nguon);
 vs[nguon]=1;
 
 while(!q.empty())
 {
 int k=q.front();
 q.pop_front();
 for(auto z:adj[k])
 if(!vs[z])
 {
 mp[z]=k;
 vs[z]=1;
 if(vs[dich]) return;
 q.push_back(z);
 }
 }
}
void solve(int x,int y)
{
if(!vs[x])
{
printf("-1"); return;
}
stack<int>st;
while(x!=y)
{
st.push(x);
x=mp[x];
}
st.push(y);
while(!st.empty())
{
cout<<st.top()<<" ";
st.pop();
}
}
int main()
{
int t,a,b,x,y,dich,nguon;
cin>>t;
while(t--)
{
	
	cin>>a>>b>>nguon>>dich;
	for(int i=0;i<1001;i++) adj[i].clear();
	memset(vs,0,sizeof(vs));
	mp.clear();
	for(int i=1;i<=b;i++)
	{
	cin>>x>>y;
	adj[x].push_back(y);
	}
	bfs(nguon,dich);
	solve(dich,nguon);
	cout<<"\n";
}
}
