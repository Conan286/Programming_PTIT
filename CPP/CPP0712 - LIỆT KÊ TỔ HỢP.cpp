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
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
int a[101], n,k, ok;
void ktao()
{
for(int i=1;i<=k;i++)
a[i]=i;
}
void in()
{
for(int i=1;i<=k;i++)
cout<<a[i];
cout<<" ";
}
void sinh()
{
int i=k;
while(a[i]==n-k+i&&i>0)
i--;
if(i==0) ok=0;
a[i]++;
for(int j=i+1;j<=k;j++)
a[j]=a[i]+j-i;
//123  
//124 
//125 
//134  
//135 
//145 
//234 
//235 
//245 
//345
}
main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
cin>>n>>k;
ktao();
while(ok){
in();
sinh();
}
cout<<endl;
}
}
