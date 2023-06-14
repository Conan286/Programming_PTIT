#include<bits/stdc++.h>
using namespace std;
void phantichso1(int n,vector<int> &v,int it)
{
if(n==0)
{
	int dk=1;
	for(int i=0;i<v.size()-1;i++) if(v[i]<v[i+1]) dk=0;
	if(dk){
cout<<"(";
for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" "; cout<<v[v.size()-1];
cout<<") ";
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
vector<int>v;
phantichso1(n,v,n);
cout<<"\n";
}
}
