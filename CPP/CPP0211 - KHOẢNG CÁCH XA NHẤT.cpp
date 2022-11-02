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
void nhap(int a[],int n)
{
for(int i=0;i<n;i++) cin>>a[i];
}
int distance(int a[],int n)
{
int ans=0;
for(int i=0;i<n-1;i++)
for(int j=n-1;j>i;j--)
if(a[j]>=a[i]){
ans=max(ans,j-i);
break;
}
return ans;
}
int main()
{
int t,n,n1,n2,n3;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
cout<<distance(a,n)<<endl;
}
}




