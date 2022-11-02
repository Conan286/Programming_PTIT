#include<iostream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <iterator>
#include <algorithm>
#include<sstream>
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
using namespace std;
int solve(string s)
{
int cnt=0;
string s2="100";
while(s.find(s2)!=-1)
{
s.erase(s.find(s2),3);
cnt+=3;
}
return cnt;
}
main()
{
int t,n;
string s;
cin>>t;
while(t--)
{
cin>>s;
if(!solve(s)) puts("");
else
cout<<solve(s)<<endl;
}
}

