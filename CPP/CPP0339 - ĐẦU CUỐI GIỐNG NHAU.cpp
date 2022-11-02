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
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;
ll res(string s)
{
int n=s.size();
ll c=n;
for(int i=0;i<n-1;i++)
for(int j=n-1;j>i;j--)
if(s[i]==s[j])
++c;
return c;
}

main()
{
int t,m; 
string s;
cin>>t;
while(t--)
{
cin>>s;
cout<<res(s)<<endl;
}
}

