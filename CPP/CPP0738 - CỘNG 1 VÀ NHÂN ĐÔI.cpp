#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long

using namespace std;
void scanf(int a[],int n);
int answer(int a[],int n);
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
scanf(a,n);
cout<<answer(a,n)<<endl;
}
}
void scanf(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int answer(int a[],int n)
{
int m=0,cnt=0,mod=0;
for(int i=0;i<n;i++){
cnt=0;
while(a[i]>0){
if(a[i]%2==0) a[i]/=2,cnt++; 
else a[i]-=1,mod++;
}
m=max(m,cnt);
}
return m+mod;
}

