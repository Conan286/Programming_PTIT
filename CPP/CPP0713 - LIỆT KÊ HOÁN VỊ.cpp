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
#define ll long long
using namespace std;

int a[101], n,ok=0;
void ktao()
{
for(int i=0;i<=n;i++) a[i]=i;
}
void in()
{
for(int i=1;i<=n;i++)
cout<<a[i];
cout<<" "; 
}
void sinh()
{
int i=n-1;
while(i>0&&a[i]>a[i+1])
{
i--;
}
if(i==0) ok=0;
else{
int j=n;
while(a[i]>a[j])
j--;
swap(a[i],a[j]);
reverse(a+i+1,a+n+1);
//45231
//12345
//i=3
//45321

}
}
main()
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
in();
sinh();
}
cout<<endl;
}
}
