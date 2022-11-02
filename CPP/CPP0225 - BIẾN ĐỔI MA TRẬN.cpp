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
void nhap(int a[][101],int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
int bdmt(int a[][101],int n)
{
int maxsum=0,row[n],column[n],i=0,j=0,sum=0,cnt=0;
memset(row,0,sizeof(row));
memset(column,0,sizeof(column));
for(int i=0;i<n;i++)
 for(int j=0;j<n; j++)
  {
   row[i]+=a[i][j];
   column[j]+=a[i][j];
  }
for(auto x:column) maxsum=max(maxsum,x);
for(auto x:row) maxsum=max(maxsum,x);
while(i<n and j<n)
{
sum=max(maxsum-row[i],maxsum-column[j]);
row[i]+=sum,column[j]+=sum,cnt+=sum;
if(row[i]==maxsum)++i;
if(column[j]==maxsum)++j;
}
return cnt;
}
int main()
{
int t,n;
int a[101][101];
cin>>t;
while(t--)
{
cin>>n;
nhap(a,n);
cout<<bdmt(a,n)<<endl;
}
}

