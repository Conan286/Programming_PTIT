#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=n;i++) cin>>a[i];
sort(a+1,a+n+1);
}
void sinh()
{
int j=n-1;
while(a[j]>a[j+1]&&j>0) j--;
if(j==0) ok=0;
else{
int i=n;
while(a[j]>a[i]) i--;

swap(a[i],a[j]);
reverse(a+j+1,a+n+1);
}
}
void in()
{
for(int i=1;i<=n;i++ ) cout<<a[i]<<" "; cout<<"\n";
}
int main()
{
int t;
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

