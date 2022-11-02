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
using namespace std;

bool check(string s)
{
int n=s.size(),c=0,l=0;
for(int i=0;i<n;i++)
{
if(i%2==0) c+=(s[i]-'0');
else l+=(s[i]-'0');
}
return ((c-l)%11==0);
}
main()
{
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<check(s)<<endl;
}
}
