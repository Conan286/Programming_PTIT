#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include <algorithm>
#include<sstream>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 1001
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
bool check(int a[],int l,int r)
{
int i=l+1;
while(i<=r&&a[i]>=a[i-1]) i++;
while(i<=r&&a[i]<a[i-1]) i++;
return i==r+1;
}
main()
{
int t,l,r,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
cin>>l>>r;
if(check(a,l,r)) yes
else no
}
}

