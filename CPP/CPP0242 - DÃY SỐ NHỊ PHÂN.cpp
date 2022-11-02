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
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
void nhap(int a[],int b[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
}
int solve(int a[],int b[],int n)
{
int s1=0,s2=0,res=0;
for(int i=0;i<n;i++)
{
s1=s2=0;
for(int j=i;j<n;j++)
{
s1+=a[j];
s2+=b[j];
if(s1==s2){
int l=j-i+1;
res=max(res,l);
}
}
}
return res;
}
main()
{
int t,n;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
while(t--)
{
cin>>n;
int a[n],b[n];
nhap(a,b,n);
cout<<solve(a,b,n)<<endl;
}
}
