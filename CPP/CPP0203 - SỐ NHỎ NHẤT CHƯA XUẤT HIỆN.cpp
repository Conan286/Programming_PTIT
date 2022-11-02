#include<bits/stdc++.h>
#include<set>
#include<vector>
#define ll long long
using namespace std;
int solve(vector<int>&p)
{
int n=p.size();
if(n<=0||p[0]>1) return 1;

for(int i=1;i<n;i++)
if(p[i]-p[i-1]>1)
return p[i-1]+1;
return p[n-1]+1;
}
main()
{
int t,n,x=0;
cin>>t;
vector<int>p;
while(t--)
{
p.clear();
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
if(x>0) p.push_back(x);
//else cout<<x<<" nho hon 0"<<endl;
}
sort(p.begin(), p.end());
//for(int i=0;i<p.size();++i) cout<<p[i]<<" "; cout<<endl;
cout<<solve(p)<<endl;
}
}

