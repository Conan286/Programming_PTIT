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
int merge(int a[],int n)
{
int l=0,r=n-1,cnt=0;
while(l<r)
{
if(a[l]==a[r]) ++l,--r;
else if(a[l]<a[r]) {
l++;
a[l]+=a[l-1];
++cnt;
}
else {
--r;
a[r]+=a[r+1];
++cnt;
}
}
return cnt;
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
cout<<merge(a,n)<<endl;
}
}




