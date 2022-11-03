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
#define no puts("NONE");
using namespace std;
void sinh(string &s)
{
int n=s.size(),i=n-1;
while(s[i]=='0' and i>=0)i--;
if(i==0) for(int i=0;i<n;i++) s[i]='1';
else{
s[i]='0';
for(int j=i+1;j<n;j++) s[j]='1';
}
//10100
//10011
}
void in(string s)
{
cout<<s<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
sinh(s);
in(s);
}
}

