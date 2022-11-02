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
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void in(int a[],int n)
{
int l=(n+1)/2 ,i=0,j=l;
while(i<l&&j<n)
{
cout<<a[i++]<<" "<<a[j++]<<" ";
}
//while(i<o) cout<<a[i++]<<" ";
//while(i<=l) cout<<a[i++]<<" ";
if(n%2!=0) cout<<a[i];
cout<<endl;
}
//4
//1  2  2 1
//1 1 2 2
//1 2 1 2
//
//3
//1  3  2
//1 2 3
//1 3 2
//4
//1 5 2 3
//1 3 2 5
//5
//1 5 3 2 6
//1 2 3 5 6
//1 5 2 6 3
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
nhap(a,n);
sort(a,a+n);
in(a,n);
}
}
