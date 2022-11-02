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
#include<iomanip>
#define ll long long

#define yes puts("YES");
#define no puts("NO");
using namespace std;
bool check1(string s)
{
int n=s.size();
for(int i=1;i<n;i++)
if(s[i]<s[i-1]) return 0;
return 1;
}
bool check2(string s)
{
int n=s.size();
for(int i=1;i<n;i++)
if(s[i]>s[i-1]) return 0;
return 1;
}
int main() {
int t;
string s;
cin>>t;
while(t--)
{
scanf("\n");
getline(cin,s);
if(check1(s) or check2(s)) yes
else no
}
}

