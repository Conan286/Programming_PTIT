#include<bits/stdc++.h>
using namespace std;
vector<string>vs;
int a[101],n,sum;
void toiyeuptit(int x,vector<int>&v,int st)
{
if(x<0) return;
if(x==0)
{
int check=1;
for(int i=0;i<v.size()-1;i++) if(v[i]>v[i+1]) check=0;
if(check)
{
string s="{";
for(int i=0;i<v.size()-1;i++) s+=to_string(v[i])+" "; s+=to_string(v[v.size()-1]);
s+="}";
vs.push_back(s);
}
}
for(int i=st;i<n;i++)
{
v.push_back(a[i]);
toiyeuptit(x-a[i],v,i);
v.pop_back();
}
}

int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>sum;
vector<int>v;
vs.clear();
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
toiyeuptit(sum,v,0);
if(!vs.size()) printf("-1\n");
else{
cout<<vs.size()<<" ";
for(int i=0;i<vs.size();i++) cout<<vs[i]<<" ";
cout<<"\n";
}
}
}
