#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define clearstr(); cin.ignore(200, '\n');
#define M 10001
using namespace std;

void solve(string s,int c)
{
for(int i=0;i<s.size();i++)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
 stringstream str(s);
 string s1,s2="";
 vector<string>v;
 v.clear();
 while(str>>s1)
 v.push_back(s1);
 int n=v.size();
 for(int i=0;i<n;i++)
 v[i][0]-=32;
 switch(c){
 case 2:
  for(int i=1;i<n;i++)
 s2+=v[i]+" ";
  s2+=v[0];
 cout<<s2<<endl;
 break;
 case 1:
 s2+=v[n-1]+" ";
  for(int i=0;i<n-1;i++)
 s2+=v[i]+" ";
   cout<<s2<<endl;
 break;
}
}
main()
{
string s;
int c,t;
cin>>t;
cin.ignore();
while(t--)
{
cin>>c;
cin.ignore();
getline(cin,s);
solve(s,c);
}
}

