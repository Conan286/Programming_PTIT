#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int m,n;
cin>>m>>n;
int a[m],b[n];
vector<int>v;
set<int>s,s1,s2;
for(int i=0;i<m;i++) { cin>>a[i]; s.insert(a[i]); s1.insert(a[i]);}
for(int i=0;i<n;i++) {cin>>b[i]; s.insert(b[i]); s2.insert(b[i]);}

for(auto x:s) cout<<x<<" "; cout<<endl;
for(auto mp1:s1)
if(s2.find(mp1)!=s2.end()) cout<<mp1<<" "; cout<<endl;
}
}
