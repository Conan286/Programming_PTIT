#include<bits/stdc++.h>
#define ll long long
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void bubble_sort(int a[],int n)
{
int cnt=0;
for(int i=0;i<n-1;i++){
bool check=0;
for(int j=1;j<n;j++)
if(a[j]<a[j-1])
{
check=1;
swap(a[j],a[j-1]);
}
if(check){
cout<<"Buoc "<<++cnt<<": ";
for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
}
}
}
int main()
{
int n,t;
cin>>t;
while(t--){
cin>>n;
int a[n],ans=-1;
map<int,int>mp;
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
if(mp[a[i]]>n/2) ans=a[i];
}
if(ans<0) puts("NO");
else cout<<ans<<endl;
}
}
