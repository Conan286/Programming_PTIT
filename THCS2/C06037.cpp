#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<float.h>
#include<limits.h>
#define cin(n) scanf("%d",&n);
#define ll long long
#define cout(n) printf("%d\n",n);
#define cinstr(s) scanf("\n%[^\n]s",&s);
int point(char a1[],char a2[],int n);
main()
{
int n,i,j,check,sum,size,min=1e3;
cin(n)
char s[n][101];
for(i=0;i<n;++i) cinstr(s[i])
size=strlen(s[0]);
for(i=0;i<n;++i)
{
check=1,sum=0;
for(j=0;j<n;j++)
{
if(point(s[i],s[j],size)<0){
 puts("-1");
 check=0;
 break;
}
else sum+=point(s[i],s[j],size);
}
if(!check) break;
min=sum<min?sum:min;
}
if(check) cout(min)
}
int point(char s1[],char s2[],int n)
{
int i,j,p,id;
for(p=0;p<n;p++)
{
id=1;
for(j=0;j<n;j++)
{
if(s1[j]!=s2[(p+j)%n]) {
id=0;
break;
}
}
if(id) break;
}
return id?p:-1;
}
