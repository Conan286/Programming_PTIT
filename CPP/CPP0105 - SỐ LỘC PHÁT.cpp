#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
bool check(string s)
{
for(int i=0;i<s.size();i++) 
if(s[i]!='0'&&s[i]!='6'&&s[i]!='8') 
return 0;
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

