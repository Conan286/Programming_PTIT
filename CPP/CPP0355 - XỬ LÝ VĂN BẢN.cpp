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
int main()
{
string s;
vector<string>w;
while(cin>>s) w.push_back(s);
for(auto &x:w)
 for(auto &i:x)
  i=tolower(i);
for(int i=0;i<w.size();i++)
 if(i==0 or w[i-1][w[i-1].size()-1]=='?' or w[i-1][w[i-1].size()-1]=='!' or w[i-1][w[i-1].size()-1]=='.')
  w[i][0]=toupper(w[i][0]);  
  
for(auto &s:w)
{
int n=s.length();
if(s[n-1]=='?' or s[n-1]=='!' or s[n-1]=='.')
{
s.erase(s.end()-1);
cout<<s<<"\n";
}
else 
cout<<s<<" ";
}
}
