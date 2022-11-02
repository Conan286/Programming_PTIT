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
void solve(string s)
{
string str="",tmp;
int n=s.size();
fo(i,0,n-1)
if(s[i]>='A'&&s[i]<='Z')
s[i]+=32;
stringstream ss(s);
vector<string>v;
v.clear();
while(ss>>tmp)
v.push_back(tmp);
n=v.size();
str+=v[n-1];
fo(i,0,n-2)
str+=v[i][0];
str+="@ptit.edu.vn";
cout<<str<<endl;
}
main()
{
string s;
getline(cin,s);
solve(s);
}


