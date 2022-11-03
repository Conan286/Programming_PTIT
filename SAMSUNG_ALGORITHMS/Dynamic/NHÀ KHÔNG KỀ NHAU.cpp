//B21DCCN441
//idea: https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long
#define INT_MAX 1e9
#define yes puts("YES");
#define no puts("NONE");
using namespace std;
//  6
//  5 5 10 100 10 5

ll qhd(ll a[],int n)
{
ll inc=a[0],enc=0;
for(int i=1;i<n;i++)
{
ll nenc=max(inc,enc);
inc=enc+a[i];
enc=nenc;
}
return max(inc,enc);
}
void nhap(ll a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
int main()
{
int ct,n;
cin>>ct;
while(ct--)
{
cin>>n;
ll a[n];
nhap(a,n);
cout<<qhd(a,n)<<endl;
}
}

