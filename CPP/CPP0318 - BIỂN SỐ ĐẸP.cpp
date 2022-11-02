#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define ll long long
#define N 1001
#define yes puts("YES");
#define no puts("NO");
#define ivd puts("INVALID");
using namespace std;
void print(int a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}
void input(int a[],int n)
{
for(int i=0;i<n;i++)
cin>>a[i];
}
bool check(string s)
{
int a=s[5]-'0',b=s[6]-'0',c=s[7]-'0',d=s[9]-'0',e=s[10]-'0';
bool dk1=(a<b&&b<c&&c<d&&d<e);
bool dk2=(a==b&&b==c&&c==d&&d==e);
bool dk3=((a==b&&b==c)&&(d==e));
bool dk4=((a==6||a==8)&&(b==6||b==8)&&(c==6||c==8)&&(d==6||d==8)&&(e==6||e==8))  ;         
return (dk1||dk2||dk3||dk4);
}
main()
{
int t,n;
string s;
cin>>t;
while(t--)
{
cin>>s;
if(check(s)) yes
else no
}
}

