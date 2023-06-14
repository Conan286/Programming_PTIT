#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int find(int a[],int b[],int n)
{
for(int i=0;i<n-1;i++) if(a[i]!=b[i]) return i;
return n-1;
}
main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n;
int a[n],b[n-1];
input(a,n);
input(b,n-1);
cout<<find(a,b,n)+1<<endl;

}
}
