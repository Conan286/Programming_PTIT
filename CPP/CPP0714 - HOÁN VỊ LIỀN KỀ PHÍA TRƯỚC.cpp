#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define for(i,a,b) for(int i=a;i<=b;i++)
#define N 1001
using namespace std;
int a[N],n,ok;
void nhap()
{
for(i,1,n) cin>> a[i];
}
//1265347
//1264753
//1264735

void sinh()
{
int i=n-1,j=n;
while(a[i]<a[i+1]&&i>0)
i--;
if(i==0) ok=0;
while(a[i]<a[j])--j;
while(j<=n)
{
swap(a[i],a[j]);
i++,j++;
}
}

void in()
{
for(i,1,n) cout<<a[i]<<" ";
cout<<endl;
}
main()
{
int t;
cin>>t;
while(t--)
{
cin>>n;
nhap();
sinh();
in();
}
}

