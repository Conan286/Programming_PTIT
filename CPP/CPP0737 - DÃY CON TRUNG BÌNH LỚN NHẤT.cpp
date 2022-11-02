#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 1001
using namespace std;
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void in(ll a[],int n,int k)
{
long long b[n-k+1],m;
memset(b,0,sizeof(b));
int c=0,id;
for(int i=k-1;i<n;i++){
for(int j=i;j>i-k;j--)
b[c]+=a[j];
c++;
}
m=b[0];
//for(int i=0;i<c;i++) cout<<b[i]<<" "; cout<<endl;
for(int i=1;i<c;i++)
if(b[i]>m){
m=b[i];
id=i;
}
//cout<<"id="<<id<<endl;
for(int i=id;i<id+k;i++)
cout<<a[i]<<" ";
cout<<endl;
}
main()
{
int t,n,k;
cin>>t;
while(t--)
{
cin>>n>>k;
ll a[n];
nhap(a,n);
in(a,n,k);
}
}

