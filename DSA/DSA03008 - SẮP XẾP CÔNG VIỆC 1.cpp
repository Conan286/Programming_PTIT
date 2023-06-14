#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
return a.second<b.second;
}
int ans(vector<pair<int,int>>&v,int n)
{
int cnt=0,t=0;
//1  3  0  5  8  5
//2  4  6  7  9  9
	   for(int i=0;i<n;i++){
	   if(v[i].first>=t){++cnt;
	   t=v[i].second;
	   }
}
return cnt;

}
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n],b[n];
vector<pair<int,int>>v;
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
for(int i=0;i<n;i++) v.push_back(make_pair(a[i],b[i]));
sort(v.begin(),v.end(),cmp);
cout<<ans(v,n)<<endl;
}
}
