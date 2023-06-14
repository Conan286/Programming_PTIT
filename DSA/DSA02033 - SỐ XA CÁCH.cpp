#include<bits/stdc++.h>
using namespace std;
int n,a[11],ok=1;
void ktao()
{
for(int i=0;i<=n;i++) a[i]=i;
}
void in()
{
for(int i=1;i<=n;i++) cout<<a[i]; cout<<endl;
}
bool check()
{
for(int i=1;i<=n-1;i++) if(abs(a[i]-a[i+1])==1) return 0;
return 1;
}
void sinh()
{
int i=n-1;
while(i>0 and a[i]>a[i+1]) i--;
if(i==0) ok=0;
else
{
int j=n;
while(a[i]>a[j]) j--;
swap(a[i],a[j]);
reverse(a+i+1,a+n+1);
}
}
void solve()
{

}
int main()
{
int t;
cin>>t;
while(t--)
{
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
}
