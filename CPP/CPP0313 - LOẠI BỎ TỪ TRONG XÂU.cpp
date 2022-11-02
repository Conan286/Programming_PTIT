#include<iostream>
#include<set>
#include<map>
#include<cstring>
#include<vector>
#include<algorithm>
#include <sstream>  
#define ll long long
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
#define fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
void solve(string s,string s1)
{
int cnt=0;
stringstream str(s);
string tmp;
while(str>>tmp)
if(tmp!=s1)
cout<<tmp<<" ";
}
main()
{
int t;
string s,s1;
getline(cin,s);
cin>>s1;
solve(s,s1);
}


