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

#define yes puts("YES");
#define no puts("NONE");
using namespace std;
void nhap(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
void in(int a[],int n)
{
for(int i=0;i<n-1;i++){
	int check=0;
for(int j=i+1;j<n;j++)
if(a[j]>a[i]){
a[i]=a[j];
check=1;
break;
}
if(!check) a[i]=-1;
}
a[n-1]=-1;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
int main()
{
int t,x,n;
cin>>t;
while(t--)
{
	cin>>n;
	int a[n];
	nhap(a,n);
	in(a,n);
}
}
