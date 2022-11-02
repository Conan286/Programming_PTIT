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
using namespace std;
string solve(string a,int n)
{
map<int,int>mp;
mp.clear();
for(int i=0;i<n;i++)
{
if(a[i]=='0'||a[i]=='1') continue;
switch(a[i]){
case '2':
case '3':
case '5':
case '7':
mp[a[i]-'0']++;
break;
case '4':
//4=3!*2!*2!
mp[3]++;
mp[2]+=2;
break;
case '6':
//6!=5*3!
mp[5]++;
mp[3]++;
break;
case '8':
//8=7*2!*2!*2!
mp[7]++;
mp[2]+=3;
break;
case '9':
//9=7*8*9=7*2*3*2*3*2=7!*3!*3!*2!
mp[7]++;
mp[3]+=2;
mp[2]++;
break;
}
}
string s2="";
for(int i=9;i>1;i--) 
{
int k=mp[i];
while(k--) s2+=(char)(i+'0');
}
return s2;
}
int main()
{
int t,n;
string a;
cin>>t;
while(t--)
{
cin>>n>>a;
cout<<solve(a,n)<<endl;
}
}

