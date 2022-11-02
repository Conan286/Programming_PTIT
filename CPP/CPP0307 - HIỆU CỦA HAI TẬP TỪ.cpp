#include<iostream>
#include <fstream>
#include<cstring>
#include<cmath>
#include<map>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include <algorithm>
#include<sstream>
#include <iomanip> 
#define ll long long
#define yes puts("Yes");
#define no puts("No");
#define N 1001
#define R 1001
using namespace std;
void solve(string s1,string s2)
{
string tmp;
stringstream ss2(s2);
stringstream ss1(s1);
set<string>se1,se2;
while(ss1>>tmp) se1.insert(tmp);
while(ss2>>tmp) se2.insert(tmp);
for(auto x:se1)
if(se2.find(x)==se2.end())
cout<<x<<" ";
cout<<endl;
//chi xuat hien s1 ma k co s2
}
main()
{
int t;
string s1,s2;
cin>>t;
cin.ignore();
while(t--)
{
getline(cin,s1);
getline(cin,s2);
solve(s1,s2);
}
}


