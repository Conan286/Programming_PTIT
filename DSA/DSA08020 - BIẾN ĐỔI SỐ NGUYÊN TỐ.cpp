#include<bits/stdc++.h>
#define ll long long
#define N 10001
using namespace std;
vector<int> snt;
vector<int> adj[N];
int prime[N];
void init()
{
memset(prime,0,sizeof(prime));
for(int i=2;i*i<N;i++)
for(int j=i*i;j<N;j+=i)
prime[j]=1;
for(int i=1001;i<N;i++) if(!prime[i]) snt.push_back(i);
}
bool check(int a,int b)
{
int dif=0;
while(a && b)
{
if((a%10)!=(b%10))++dif;
a/=10;
b/=10;
}
return dif==1;
}
void dske()
{
for(int i=0;i<snt.size();i++)
for(int j=i+1;j<snt.size();j++)
if(check(snt[i],snt[j]))
{
adj[snt[i]].push_back(snt[j]);
adj[snt[j]].push_back(snt[i]);
}
}
int bfs(int a,int b)
{
bool vs[N];
memset(vs,0,sizeof(vs));
deque<pair<int,int>>dq;
dq.push_back({a,0});
vs[a]=1;
while(dq.size())
{
pair<int,int> t=dq.front();
dq.pop_front();
int x=t.first,y=t.second;
if(x==b) return y;
for(auto z: adj[x])
if(!vs[z])
{
vs[z]=1;
dq.push_back({z,y+1});
}
}
}
int main()
{
int t,a,b;
init();
dske();
cin>>t;
while(t--)
{
cin>>a>>b;
cout<<bfs(a,b)<<"\n";
}
}
