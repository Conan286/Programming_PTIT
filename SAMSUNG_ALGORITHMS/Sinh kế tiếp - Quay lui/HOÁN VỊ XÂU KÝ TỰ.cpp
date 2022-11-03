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
string s;
int ok=1;
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
vector<string>v;
cin>>s;
do{
v.push_back(s);
}while(next_permutation(s.begin(),s.end()));
for(auto x:v) cout<<x<<" ";
cout<<endl;
}
}


