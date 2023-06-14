#include<bits/stdc++.h>
using namespace std;
vector<string>vs;
int n,x,a[101];
void iloveptit(int target,vector<int>&v,int n);
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>x;
vs.clear();
vector<int>v;
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
iloveptit(x,v,0);
if(!vs.size()) puts("-1");
else{
for(string ms:vs) cout<<ms<<""; cout<<"\n";
}
}
}
void iloveptit(int target,vector<int>&v,int it)
{
if(target<0) return;
if(target==0)
{
int check=1;
for(int i=0;i<v.size()-1;i++)
if(v[i]>v[i+1]){
check=0; break;
}
if(check)
{
string str="[";
for(int i=0;i<v.size()-1;i++) str+=to_string(v[i])+" ";
str+=to_string(v[v.size()-1])+"]";
vs.push_back(str);
}
}
for(int i=it;i<n;i++)
{
v.push_back(a[i]);
iloveptit(target-a[i],v,i);
v.pop_back();
}
}
