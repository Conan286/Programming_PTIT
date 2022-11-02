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
int solve(string s,int k)
{
int n=s.length(),cnt=0;
int c[256];
for(int i=0;i<n;i++)
{
memset(c,0,sizeof(c));
int dem=0;
for(int j=i;j<n;j++)
{
if(!c[s[j]-'a'])++dem;
if(dem==k)++cnt;
if(dem>k) break;
c[s[j]-'a']=1;
}
}
return cnt;
}
main()
{
int t,k;
string s;
cin>>t;
while(t--)
{
cin>>s>>k;
cout<<solve(s,k)<<endl;
}
}


