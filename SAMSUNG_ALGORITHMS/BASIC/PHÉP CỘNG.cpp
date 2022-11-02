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
bool check(string s)
{
return (s[0]-'0')+(s[4]-'0')==(s[8]-'0');
}
int main() {
int t;
string s;
cin>>t;
while(t--)
{
scanf("\n");
getline(cin,s);
if(check(s)) yes
else no
}
}

