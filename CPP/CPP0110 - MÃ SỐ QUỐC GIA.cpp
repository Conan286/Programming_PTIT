#include<bits/stdc++.h>
#define ll long long
#define yes puts("YES");
#define no puts("NO");
 using namespace std;
void solve(string s)
{
int i;
for(i=0;i<s.size()-2;i++)
if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4') break;
//1230845
//0123456
//...i
//1235
s.erase(s.begin()+i,s.begin()+i+3);
cout<<s<<endl;
}

main()
{
int t,n;
cin>>t;
string s;
while(t--)
{
cin>>s;
solve(s);
}
}


