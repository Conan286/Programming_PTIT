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
#define ll long long
#define N 100001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
int x;
struct data{
int val,id;
};
void nhap(data a[],int n)
{
for(int i=0;i<n;i++)
{
a[i].id=i+1;
cin>>a[i].val;
}
}
void in(data a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i].val<<" ";
cout<<"\n";
}
bool cmp(data a,data b)
{
int y=abs(a.val-x),z=abs(b.val-x);
if(y==z) return a.id<b.id;
return y<z;
}
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,m;
cin>>t;
while(t--)
{
cin>>n>>x;
data a[n];
nhap(a,n);
sort(a,a+n,cmp);
in(a,n);
}
}
