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
#define ll long long
#define N 10001
#define yes puts("YES");
#define no puts("NO");
#define N INT_MAX
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
fstream input;
input.open("DATA.in",ios::in);
int n;
map<int,int>mp;
set<int>s;
while(input>>n)
{
s.insert(n);
mp[n]++;
}
for(auto x:s)
cout<<x<<" "<<mp[x]<<endl;
}
