#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
void xuat(int a[],int n)
{
//dieu kien in ra la n>0
if(n>=1){
//in day hien tai
cout<<"[";
for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
cout<<a[n-1]<<"]\n";
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
cin>>n;
int a[n];
nhap(a,n);
xuat(a,n);
}
}
