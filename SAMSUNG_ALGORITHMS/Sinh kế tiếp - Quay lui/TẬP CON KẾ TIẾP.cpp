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
//n=6 k=3
//1 2 3
//1 2 4
//1 2 5
//1 2 6
//1 3 4
//4 5 6
//max=n-k+i
while(a[i]==n-k+i and i>0) i--;
if(i==0) for(int i=1;i<=k;i++) a[i]=i;
else{
a[i]++;
for(int j=i+1;j<=n;j++) a[j]=a[j-1]+1;
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

