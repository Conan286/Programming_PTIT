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
int solve(string s)
{
int cnt=0;
stringstream str(s);
string tmp;
while(str>>tmp)
++cnt;
return cnt;
}
main()
{
int t;
cin>>t;
string s;
cin.ignore(1);
while(t--)
{
getline(cin,s);
//cout<<s<<endl;
cout<<solve(s)<<endl;
}
}

