#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
void solve(string s)
{
int n=s.size();
if(s[n-2]=='8'&&s[n-1]=='6') puts("1");
else puts("0");
}

main()
{
int t;
string s;
cin>>t;
while(t--)
{
cin>>s;
solve(s);
}
}


