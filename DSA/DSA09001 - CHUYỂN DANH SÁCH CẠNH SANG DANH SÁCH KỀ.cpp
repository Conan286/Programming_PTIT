#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,e,v,x,y;
cin>>t;
while(t--)
{
cin>>e>>v;
vector<int> a[1001];
set<int>se;
for(int i=0;i<v;i++)
{
cin>>x>>y;
se.insert(x);
se.insert(y);
a[x].push_back(y);
a[y].push_back(x);
}
for(auto v:se) {
cout<<v<<": ";
for(auto z:a[v]) cout<<z<<" "; cout<<endl;
}
}
}
