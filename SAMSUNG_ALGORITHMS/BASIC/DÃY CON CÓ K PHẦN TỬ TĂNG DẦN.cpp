#include<iostream>
#include<stack>
#include<deque>
#define run(t) cin>>t; while(t--)
#include<algorithm>

using namespace std;
int a[101],v[101],n,k,ok=1;
void ktao()
{
for(int i=1;i<=n;i++)
cin>>a[i];
sort(a+1,a+n+1);
for(int i=1;i<=k;i++)
v[i]=a[i];
}
void in()
{
for(int i=1;i<=k;i++)
cout<<v[i]<<" ";
cout<<endl;
}
void sinh()
{
//	1
//	6 3
//	6 5 3 2 7 9
//  2 3 5 6 7 9
//  2 3 5
//  2 3 6
//  2 3 7
//	2 3 9
//  2 5 6
	int i=k;
	while(v[i]==a[n+i-k] and i>0)
	{
	i--;
	}
	if(i==0) ok=0;
	else {
      int j;
	  for(j=i;j<=n;j++)
	  if(v[i]==a[j])
	  break;
	  for(int h=i;h<=k;h++)
	  v[h]=a[++j];
	 
	}
}
main()
{
int t;
run(t)
{
ok=1;
cin>>n>>k;
ktao();
while(ok)
{
in();
sinh();
}
}
}
