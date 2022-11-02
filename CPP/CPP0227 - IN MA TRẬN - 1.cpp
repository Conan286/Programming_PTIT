#include<bits/stdc++.h>
#define ll long long
#define N 1001
using namespace std;
//45 48 54 
//21 89 87 
//70 78 15
void print(int a[][1001],int n)
{
int i=0,j=0;
while(i<n)
{
while(i%2==0&&j<n) {
cout<<a[i][j++]<<" ";
}
j=n-1;
++i;
if(i>=n) break;
while(i%2!=0&&j>=0) {
cout<<a[i][j--]<<" ";
}
j=0;
++i;
}
cout<<endl;
}
void input(int a[][1001],int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
main()
{
int t,n;
cin>>t;
int a[101][1001];
while(t--)
{
cin>>n;
input(a,n);
print(a,n);
}
}


