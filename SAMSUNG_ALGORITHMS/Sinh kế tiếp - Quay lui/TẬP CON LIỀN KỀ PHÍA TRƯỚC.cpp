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

#define yes puts("YES");
#define no puts("NONE");
using namespace std;
int a[1001],n,k,ok=1;
void ktao()
{
for(int i=1;i<=k;i++)
cin>>a[i];
}
void sinh()
{
int i=k;
//2 4 5
//2 3 5
//2 3 4
while(a[i]-a[i-1]<=1 and i>0) i--;
if(i==0) for(int i=1;i<=k;i++) a[i]=n-k+i;
else{
a[i]--;
for(int j=i+1;j<=k;j++)
a[j]=n-k+j;
}
}
void in()
{
for(int i=1;i<=k;i++)
cout<<a[i]<<" ";
cout<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>k;
ktao();
sinh();
in();
}
}


