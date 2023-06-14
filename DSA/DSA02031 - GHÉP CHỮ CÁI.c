#include<stdio.h>
int n;
int ok=1;
char c;
void ktao(char a[])
{
int i;
for(i=0;i<n;i++) a[i]='A'+i;
}
void in(char a[])
{
int i;
for(i=0;i<n;i++) printf("%c",a[i]); printf("\n");
}
void sinh(char a[])
{
int i=n-2;
while(a[i]>a[i+1]) i--;
if(i<0) ok=0;
else{
int j=n-1;
while(a[i]>a[j]) j--;
//swap
char x=a[j]; a[j]=a[i]; a[i]=x;
//reverse
int l=i+1,r=n-1;
while(l<r)
{
char x=a[l]; a[l]=a[r]; a[r]=x; ++l; --r;
}
}
}
bool check(char a[])
{
int i;
for(i=1;i<n-1;i++)
if((a[i]=='A'||a[i]=='E')&&(a[i-1]!='A'&&a[i-1]!='E')&&(a[i+1]!='A'&&a[i+1]!='E')) return 0;
return 1;
}
int main()
{
scanf("%c",&c);
n=c-'A'+1;
char a[n];
ktao(a);
while(ok)
{
	if(check(a))
	in(a);
	sinh(a);
}
}

