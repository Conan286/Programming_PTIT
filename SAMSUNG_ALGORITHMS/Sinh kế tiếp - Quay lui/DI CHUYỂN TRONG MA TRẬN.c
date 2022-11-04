#include<stdio.h>
#define cin(n) scanf("%d",&n);
#define ll long long
#define run(n) scanf("%d",&n); while(n--)
#define for(i,a,b) for(i=a;i<b;i++)
#include<string.h>
int cnt=0;
int n,a[101][101],ok[101][101],m;
void inputmatrix()
{
int i,j;
for( i,1,n+1)
for(j,1,m+1)
cin(a[i][j])
}
void dichuyen(int i,int j)
{
if(i==n&&j==m) {
cnt++;
}
if(i<n&&!ok[i+1][j]) {
ok[i+1][j]=1;
dichuyen(i+1,j);
ok[i+1][j]=0;
}
if(j<m&&!ok[i][j+1]) {
ok[i][j+1]=1;
dichuyen(i,j+1);
ok[i][j+1]=0;
}
}
main()
{
int t;
cin(t)
while(t--){
cnt=0;
memset(ok,0,sizeof(ok));
cin(n) cin(m)
inputmatrix();
dichuyen(1,1);
printf("%d\n",cnt);
}
}
