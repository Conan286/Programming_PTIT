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
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void in(int a[],int n,int k)
{
multiset<int>mul;
for(int i=0;i<k;i++)
mul.insert(a[i]);
int it=*mul.rbegin();
cout<<it<<" ";
for(int i=k;i<n;i++)
{
mul.erase(mul.find(a[i-k]));
mul.insert(a[i]);
it=*mul.rbegin();
cout<<it<<" ";
}
cout<<endl;
}
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,m,k;
cin>>t;
while(t--)
{
cin>>n>>k;
int a[n];
nhap(a,n);
in(a,n,k);
}
}
