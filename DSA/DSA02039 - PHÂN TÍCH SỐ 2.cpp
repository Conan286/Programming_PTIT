#include<bits/stdc++.h>
using namespace std;
vector<string>vs;
void phantichso1(int n,vector<int> &v,int it)
{
if(n==0)
{
	int dk=1;
	for(int i=0;i<v.size()-1;i++) if(v[i]<v[i+1]) dk=0;
	if(dk){
		
string s="(";
for(int i=0;i<v.size()-1;i++) {s+=to_string(v[i]); s+=" ";} s+=to_string(v[v.size()-1]);
s+=")";
vs.push_back(s);
}
return;
}
for(int i=n;i>=1;i--)
{
v.push_back(i);
phantichso1(n-i,v,i);
v.pop_back();
}
}

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
vs.clear();
vector<int>v;
phantichso1(n,v,n);
cout<<vs.size()<<"\n";
for(int i=0;i<vs.size();i++) cout<<vs[i]<<" ";
cout<<"\n";
}
}
