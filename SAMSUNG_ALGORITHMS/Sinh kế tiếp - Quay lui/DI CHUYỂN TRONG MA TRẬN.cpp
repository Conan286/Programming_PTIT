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
int n,k,a[101][101],ok[101][101],m;
map<int,int>p;
void nhap()
{
p.clear();
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
cin>>a[i][j];
}
void dichuyen(int i,int j)
{
if(i==n&&j==m) {
cnt++;
}
if(i<n&&!ok[i+1][j]) {
ok[i+1][j]=1;
dichuyen(i+1,j);
ok[i+1][j]=0;
}
if(j<m&&!ok[i][j+1]) {
ok[i][j+1]=1;
dichuyen(i,j+1);
ok[i][j+1]=0;
}

}
main()
{
int t;
cin>>t;
while(t--)
{
cnt=0;
memset(ok,0,sizeof(ok));
cin>>n>>m;
nhap();
dichuyen(1,1);
cout<<cnt<<endl;
}
}
