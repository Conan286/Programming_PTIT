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
main()
{
int t;
string s;
cin>>t;
set<string>p;
cin.ignore(1);
while(t--)
{
getline(cin,s);
p.insert(s);
}
cout<<p.size();
}
