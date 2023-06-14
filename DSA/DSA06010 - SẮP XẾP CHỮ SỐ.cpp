#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
string s;
cin>>n;
set<int>se;
for(int i=0;i<n;i++)
{
	
 cin>>s;
 for(char c:s) se.insert(c-'0');

}
for(auto k:se) cout<<k<<" ";
cout<<endl;
}
}
