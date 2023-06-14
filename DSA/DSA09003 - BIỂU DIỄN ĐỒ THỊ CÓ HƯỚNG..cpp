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
for(int i=0;i<1001;i++) a[i].clear();
for(int i=0;i<v;i++)
{
cin>>x>>y;
a[x].push_back(y);
}
for(int i=1;i<=e;i++) {
sort(a[i].begin(),a[i].end());
cout<<i<<": ";
for(auto z:a[i]) cout<<z<<" "; cout<<endl;
}
}
}

