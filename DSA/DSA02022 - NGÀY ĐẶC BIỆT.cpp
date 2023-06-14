#include<bits/stdc++.h>
using namespace std;
int a[101],ok=1,n;
void ktao()
{
n=8;
for(int i=0;i<=n;i++) a[i]=0;
}
void sinh()
{
int i=n;
while(i>0 and a[i]==2)
{
a[i]=0;
i--;
}
if(i==0) ok=0;
else a[i]=2;
}
bool check()
{
int d=0,m=0,y=0;
for(int i=1;i<3;i++) d=d*10+a[i];
for(int i=3;i<5;i++) m=m*10+a[i];
for(int i=5;i<9;i++) y=y*10+a[i];
if(d<=22 and m<=2 and y>=2000 and d>0 and m>0) return 1;
return 0;
}
void in()
{
for(int i=1;i<3;i++) cout<<a[i]; cout<<"/";
for(int i=3;i<5;i++) cout<<a[i]; cout<<"/";
for(int i=5;i<9;i++) cout<<a[i]; cout<<"\n";
}
int main()
{
ktao();
while(ok)
{
if(check())
in();
sinh();
}
}
