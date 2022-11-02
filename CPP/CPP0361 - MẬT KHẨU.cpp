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
#include<string.h>
#define ll long long
#define li long int
#define mpi map<int,int>
#define vi vector<int>
#define si set<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mps map<string,int>
#define yes puts("YES");
#define no puts("NO");
#define invalid puts("INVALID");
#define end puts("");
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
fast()
int t,n,cnt=0;
cin>>n;
string s;
vector<string>v;
for(int i=0;i<n;i++)
{
cin>>s;
v.push_back(s);
}
for(int i=0;i<n;i++)
 for(int j=0;j<n;j++){
  if(i==j) continue;
  else if(v[i].find(v[j])!=string::npos)
  ++cnt;
}
cout<<cnt<<endl;
}
