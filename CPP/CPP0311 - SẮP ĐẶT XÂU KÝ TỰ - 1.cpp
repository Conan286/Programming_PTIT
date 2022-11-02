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
#include<string.h>
#include<fstream>
#include<iomanip>
#define ll long long
using namespace std;
string s;
bool check()
{
//aaaaabbc
//5 8
int n=s.length();
int a[26];
memset(a,0,sizeof(a));
for(int i=0;i<n;i++)
a[s[i]-'a']++;
int k=*max_element(a,a+26);
return n-k>k-2;
}
main()
{
int t;
cin>>t;
while(t--)
{
cin>> s;
cout<<check()<<endl;
}
}


