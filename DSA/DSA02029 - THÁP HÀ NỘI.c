#include<stdio.h>
#define scan(n) scanf("%d",&n);
#define prin(a,c) printf("%c -> %c\n",a,c);
void hanoitower(int n,char a,char b,char c)
{
if(n==1) { prin(a,c) return;}
hanoitower(n-1,a,c,b);
hanoitower(1,a,b,c);
hanoitower(n-1,b,a,c);
}
int main()
{
int n;
scan(n)
hanoitower(n,'A','B','C');
}
