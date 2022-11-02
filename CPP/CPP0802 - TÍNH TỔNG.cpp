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
#define N 10001
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX

using namespace std;
bool cmp(string a)
{
string s="2147483647";
if(a.size()>s.size()) return 0;
else if(a.size()<s.size()) return 1;
return a<s;
}
main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
fstream input;
input.open("DATA.in",ios::in);
string s;
ll res=0;
ll x=0;
while(input>>s)
{
if(isdigit(s[0])&&cmp(s)){
res+=stoll(s,nullptr,10);
}
}
cout<<res;
}
