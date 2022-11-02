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
#define cout(n) printf("%d ",n);
#define ll long long
#define cinll(n) scanf("%lld",&n);
#define coutll(n) printf("%lld",&n);
#define restring(s) scanf("\n%[^\n]s",&s);
#define re(a,b) scanf("%d %d",&a,&b);
#define rell(a,b) scanf("%lld %lld",&a,&b);
#define N 10001
int dathuc[N];
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
void swap(int *a,int *b)
{
	int t=*b;
	*b=*a;
	*a=t;
}
void cinarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) cin(a[i])
}
void coutarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) cout(a[i])
	puts("");
}
void randomarr(int a[],int n)
{
int i;
for(i=0;i<n;i++) a[i]=rand()%99+1;
}
int lengthmax(int a[],int n)
{
int f[n],i,j;
f[0]=1;
for(i=1;i<n;i++)
{
f[i]=1;
for(j=0;j<i;++j) if(a[i]>a[j]) f[i]=max(f[i],f[j]+1);
}
int ans=1;
for(i=1;i<n;i++) ans=max(f[i],ans);
return ans;
}
void solve(char s[],int n)
{
//isdigit
memset(dathuc,0,sizeof(dathuc));
int i,count=0;
for(i=0;i<n;i++)
{
int heso=0,mu=0;
if(isdigit(s[i])){
while(isdigit(s[i])){
heso=heso*10+s[i++]-'0';
}
i+=3;
while(isdigit(s[i])){
mu=mu*10+s[i++]-'0';
}
//i+=3;
dathuc[mu]+=heso;
}
}
for(i=N;i>=0;i--){
if(dathuc[i]!=0) ++count;
}
for(i=N;i>=0;i--){
if(dathuc[i]!=0&&count>1) {
printf("%d*x^%d + ",dathuc[i],i);
--count;
}
}
for(i=0;i<=N;i++){
if(dathuc[i]!=0){
printf("%d*x^%d",dathuc[i],i);
break;
}
}
puts("");
}
main(){
int t;
cin(t);
while(t--)
{
char s1[N],s2[N],s[5*N];
restring(s1); 
restring(s2);
strcpy(s,s1);
strcat(s," + ");
strcat(s,s2);
int n=strlen(s);
//printf("%s\n",s);
solve(s,n);
}
}
