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
#include<fstream>
#include<iomanip>
#define ll long long
using namespace std;
string s;
void solve(string s)
{
string a=s;
int n=s.length(),i=n-2,j;
while(i>=0&&a[i]<=a[i+1])i--;
if(i<0) cout<<"-1\n";
else{
 int j=n-1;
 while(a[i]<=a[j])j--;
 while(a[j]==a[j-1]&&j-1>i)j--;
 swap(a[i],a[j]);
 cout<<a<<endl;
}
}
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>s;
solve(s);
}
}

