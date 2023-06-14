#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
void xuat(int a[],int n)
{
//dieu kien in ra la n>0
if(n>=1){
//in day hien tai
string s="[";
for(int i=0;i<n-1;i++) { s+=to_string(a[i]); s+=" "; }
s+=to_string(a[n-1]);s+="]";
v.push_back(s);
//update
for(int i=0;i<n-1;i++)
a[i]+=a[i+1];
//backtrack
xuat(a,n-1);
}
}
int main()
{
int t,n;
cin>>t;
while(t--)
{
v.clear();
cin>>n;
int a[n];
nhap(a,n);
xuat(a,n);
for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" "; cout<<endl;
}
}
