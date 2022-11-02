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
using namespace std;
int main()
{
int t,n,k,x,l,r,inp;
cin>>t;
while(t--)
{
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){ cin>>a[i];}
cin>>k>>x;
int m=lower_bound(a.begin(),a.end(),x)-a.begin();
l=m-1;
r=(a[m]==x)?(m+1):m;
for(int i=k/2-1;i>=0;i--) cout<<a[l-i]<<" ";
for(int i=0;i<k/2;i++) cout<<a[r+i]<<" ";
cout<<endl;
}
}

