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
#include<string.h>
#define ll long long
using namespace std;
void nhap(int a[][101],int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
void solve(int a[][101],int b[][101],int m,int n)
{
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout<<a[i][j]*b[i%m][j%m]<<" ";
cout<<endl;
}
}
main()
{
int m,n;
int a[101][101],b[101][101];
cin>>n; nhap(a,n);
cin>>m; nhap(b,m);
solve(a,b,m,n);
}


