#include<bits/stdc++.h>
#define run(t) cin>>t; while(t--)
#define ll long long
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
ll output(int a[],int n)
{
sort(a,a+n);
ll x=0,y=0;
for(int i=0;i<n;i+=2)
x=x*10+a[i];
for(int i=1;i<n;i+=2)
y=y*10+a[i];
return x+y;
/*
2 3 4 5 6 8
2 4 6
3 5 8
6 0 4
0 0 0 3 4 5 7
0 0 4 7
0 3 5
*/
}
int main()
{
int t,n;
run(t)
{
cin>>n;
int a[n];
nhap(a,n);
cout<<output(a,n)<<endl;
}
}
