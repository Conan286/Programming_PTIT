#include<bits/stdc++.h>
#include<set>
#include<vector>
#define yes puts("YES");
#define no puts("NO");
#define ll long long
#define N 100001
using namespace std;
bool check(string s)
{
int l=0,r=s.size()-1;
while(l<r)
{
if(s[l]!=s[r]||((s[l]-'0')%2!=0))
return 0;
++l;
--r;
}
return 1;
}
main()
{
string s;
int t,n;
cin>>t;
while(t--)
{
cin>>s;
if(check(s)) yes
else no
}
}

