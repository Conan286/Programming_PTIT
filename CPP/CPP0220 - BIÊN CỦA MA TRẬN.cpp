#include<bits/stdc++.h>
#define ll long long
#define N 1001
using namespace std;
//45 48 54 
//21 89 87 
//70 78 15
void print(int a[][1001],int n)
{
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i==0||j==0||i==n-1||j==n-1)
cout<<a[i][j]<<" ";
else cout<<" "<<" ";
}
cout<<endl;
}
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


