#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
set<char>se;
for(auto i:s)
se.insert(i);
cout<<se.size()<<endl;
}
