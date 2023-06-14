#include<stdio.h>
int n,x;
int ok=1;
char c;
void ktao(char a[])
{
int i;
for(i=0;i<n;i++) a[i]='A';
}
void in(char a[])
{
int i;
for(i=0;i<n;i++) printf("%c",a[i]); printf("\n");
}
void sinh(char a[])
{
int i=n-1;
while(a[i]==c) i--;
if(i<0) ok=0;
else{
int j;
a[i]++;
for(j=i+1;j<n;j++) a[j]=a[i];
}
}
int main()
{
scanf("%c %d",&c,&n);
char a[n];
ktao(a);
while(ok)
{
	in(a);
	sinh(a);
}
}

