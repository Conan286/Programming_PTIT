#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int main()
{
int n,k;
cin>>n;
int a[n];
nhap(a,n);
cin>>k;
for(int i=0;i<n;i++)
if(a[i]!=k) cout<<a[i]<<" ";
}
