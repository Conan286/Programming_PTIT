#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include <algorithm>
#include<sstream>
#include<iomanip>
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 101
#define fou(i,a,b) for(int i=a;i<=b;i++)
#define fod(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
void nhap(int a[][101],int m,int n)
{
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
}
void xoay(int a[][101],int m,int n)
{
//1   2  3  4
//5   6  7  8
//9  10 11 12
//13 14 15 16
//
// 5  1  2  3
// 9 10  6  4
//13 11  7  8
//14 15 16 12
//
//1 2
//5 6
//5 1 2 6 
vector<int>v;
vector<int>p;
int c=0,h1=0,c1=0,h2=m-1,c2=n-1;
int b[m][n];
while(c<m*n)
{
v.clear();
fou(i,c1,c2)
v.push_back(a[h1][i]),c++;
fou(i,h1+1,h2)
v.push_back(a[i][c2]),c++;
if(h1<h2)
fod(i,c2-1,c1)
v.push_back(a[h2][i]),c++;
if(c1<c2)
fod(i,h2-1,h1+1)
v.push_back(a[i][c1]),c++;
int k=v.size();
//cout<<"k="<<k<<endl;
p.push_back(v[k-1]);
for(int i=0;i<k-1;i++) p.push_back(v[i]);
h1++,c1++,h2--,c2--;
}
c=0,h1=c1=0,h2=m-1,c2=n-1;
while(c<m*n){
fou(i,c1,c2) b[h1][i]=p[c++];
fou(i,h1+1,h2) b[i][c2]=p[c++];
if(h1<h2) fod(i,c2-1,c1) b[h2][i]=p[c++];
if(c1<c2) fod(i,h2-1,h1+1) b[i][c1]=p[c++];
h1++,c1++,h2--,c2--;
}
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
cout<<b[i][j]<<" ";
cout<<endl;
}
main()
{
int t,m,n;
cin>>t;
int a[N][101];
while(t--)
{
cin>>m>>n;
nhap(a,m,n);
xoay(a,m,n);
}
}

