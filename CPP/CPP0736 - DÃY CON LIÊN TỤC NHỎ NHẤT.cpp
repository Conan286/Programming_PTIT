#include<iostream>
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int solve(int a[],int n,int x)
{
int i=0,j=0,ans=n+1;
int s=0;
while(j<n)
{
s+=a[j++];
while(s>x)
{
ans=min(ans,j-i);
s-=a[i++];
}
}
return (ans%(n+1)==0?-1:ans);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,x;
cin>>t;
while(t--)
{
cin>>n>>x;
int a[n];
nhap(a,n);
cout<<solve(a,n,x)<<endl;
}
}


