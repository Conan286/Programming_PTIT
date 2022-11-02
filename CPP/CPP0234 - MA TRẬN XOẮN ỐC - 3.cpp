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
using namespace std;
void input(int a[][101],int m,int n)
{
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
int res(int a[][101],int m,int n,int k)
{
int cnt=0,h1=0,c1=0,h2=m-1,c2=n-1;
while(cnt<k)
{
for(int i=c1;i<=c2;i++){
++cnt;
if(cnt==k) return a[h1][i];
}
for(int i=h1+1;i<=h2;i++){
++cnt;
if(cnt==k) return a[i][c2];
}
if(h1<=h2){
for(int i=c2-1;i>=c1;i--)
{
++cnt;
if(cnt==k) return a[h2][i];
}
}
if(c1<=c2){
for(int i=h2-1;i>h1;i--)
{
++cnt;
if(cnt==k) return a[i][c1];
}
}
++h1,++c1,--h2,--c2;
}
}
main()
{
int t, m,n,k;;
cin>>t;
while(t--)
{
int a[101][101];
cin>>m>>n>>k;
input(a,m,n);
cout<<res(a,m,n,k)<<endl;
}
}

