#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=n;i++) a[i]=6;
}
void sinh()
{
int i=n;
while(a[i]==8&&i>0){
a[i]=6;
i--;
}
if(i==0) ok=0;
else a[i]=8;
}
void in()
{
for(int i=1;i<=n;i++ ) cout<<a[i]; cout<<"\n";
}
bool check()
{
if(a[1]==6||a[n]==8) return 0;
for(int i=1;i<n;i++) if(a[i]==8&&a[i+1]==8) return 0;
for(int i=1;i<=n-3;i++) if(a[i]==6&&a[i+1]==6&&a[i+2]==6&&a[i+3]==6) return 0;
return n>5;
}
int main()
{
int t;
ok=1;
cin>>n;
ktao();
while(ok)
{
if(check())
in();
sinh();
}
}

