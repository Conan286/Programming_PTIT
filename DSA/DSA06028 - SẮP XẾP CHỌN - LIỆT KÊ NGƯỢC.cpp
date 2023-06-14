#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
int t,n;

vector<string>v;
cin>>n;
int a[n],cnt=1;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n-1;i++)
{
int m=a[i],id=i;
for(int j=i+1;j<n;j++)
{
if(a[j]<m){
id=j;
m=a[j];
}
}
if(m!=a[i]){
swap(a[i],a[id]);
}
string s="Buoc ";
s+=to_string(cnt++);
s+=": ";
for(int k=0;k<n;k++){
s+=to_string(a[k])+" ";
}
v.push_back(s);
}
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<"\n";
}

