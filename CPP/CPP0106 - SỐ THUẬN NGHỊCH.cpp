#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
bool check(string s)
{
int l=0,r=s.size()-1;
while(l<=r)
if(s[l++]!=s[r--]) return 0;
return 1;
}
void solve(string s)
{
cin>>s;
if(check(s)) yes
else no
}
main()
{
int t;
string s;
cin>>t;
while(t--)
{
solve(s);
}
}

