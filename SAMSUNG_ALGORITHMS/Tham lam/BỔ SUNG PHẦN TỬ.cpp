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
#define INT_MAX 1e9
#define yes puts("YES");
#define no puts("NONE");
using namespace std;
main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++)
{
cin>>a[i];
s.insert(a[i]);
}
int Max=*(s.rbegin()),Min=*(s.begin());
cout<<Max-Min+1-s.size()<<endl;
}
}
