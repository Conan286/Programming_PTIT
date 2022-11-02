#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
 bool check(string s)
 {
 for(int i=0;i<s.size()-1;i++)
 {
 if(s[i+1]-s[i]!=1&&s[i+1]-s[i]!=-1) return 0;
 }
 return 1;
 }
void solve(string s)
{
if(check(s)) yes 
else no
}

main()
{
int t,n;
cin>>t;
string s;
while(t--)
{
cin>>s;
solve(s);
}
}


