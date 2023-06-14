#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--){
vector<string>v;
cin>>n;
int a[n],cnt=1;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n-1;i++)
{
int id=0;
for(int j=1;j<n;j++)
{
if(a[j]<a[j-1])
{
id=1;
swap(a[j],a[j-1]);
}
}
if(id)
{
string s="Buoc ";
s+=to_string(cnt++);
s+=": ";
for(int k=0;k<n;k++){
s+=to_string(a[k])+" ";
}
v.push_back(s);
}
}
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<"\n";
}
}
