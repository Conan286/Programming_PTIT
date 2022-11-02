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
using namespace std;
void nhap(int a[],int n)
{
int i=0;
while(i<n*n)
cin>>a[i++];
}
main()
{
int t,n,k;
int a[N];
string s;
cin>>t;
while(t--)
{
cin>>n>>k;
nhap(a,n);
sort(a,a+n*n);

cout<<a[k-1]<<endl;
}
}

