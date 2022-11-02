#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[100][100];
int cnt=1;
int c1=0,c2=n-1,h1=0,h2=n-1;
while(cnt<=n*n){

for(int i=c1;i<=c2;i++)
{
	a[h1][i]=cnt++;
}
for(int i=h1+1;i<=h2;i++)
{
	a[i][c2]=cnt++;
}
if(h1!=h2)
{
	for(int i=c2-1;i>=c1;i--)
	{
		a[h2][i]=cnt++;
	}
}
if(c1!=c2){
	for(int i=h2-1;i>h1;i--)
	{
		a[i][c1]=cnt++;
	}
}
c1++;
c2--;
h1++;
h2--;
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<a[i][j]<<" ";
	}
	printf("\n");
}
}

