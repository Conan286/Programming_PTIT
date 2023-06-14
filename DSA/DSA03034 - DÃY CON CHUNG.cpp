#include<bits/stdc++.h>
#define ll long long
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int main()
{
int t;
int n1,n2,n3;
cin>>t;
while(t--)
{
cin>>n1>>n2>>n3;
int a[n1],b[n2],c[n3];
int i=0,j=0,k=0;
input(a,n1);
input(b,n2);
input(c,n3);
vector<int>v;
v.clear();
while(i<n1&&j<n2&&k<n3)
{
if(a[i]==b[j] and b[j]==c[k])
{
v.push_back(a[i]);
i++,j++,k++;
}
else if(a[i]<b[j] )i++;
else if(b[j]<c[k] ) j++;
else k++;
}
if(v.size()<1) puts("NO");
else{
 for(auto x:v) cout<<x<<" ";
 cout<<endl;
}
}
}
