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
ll cnt=0;
int n,k,a[101][101],ok[101][101];
map<int,int>p;
void nhap()
{
p.clear();
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
cin>>a[i][j];
}
void dichuyen(int i,int j,int s)
{
if(i==n&&j==n) {
p[s]++;
}
if(i<n&&!ok[i+1][j]) {
ok[i+1][j]=1;
dichuyen(i+1,j,s+a[i+1][j]);
ok[i+1][j]=0;
}
if(j<n&&!ok[i][j+1]) {
ok[i][j+1]=1;
dichuyen(i,j+1,s+a[i][j+1]);
ok[i][j+1]=0;
}

}
main()
{
int t;
cin>>t;
while(t--)
{
cin>>n>>k;
nhap();
int x=a[1][1];
dichuyen(1,1,x);
cout<<p[k]<<endl;
}
}
