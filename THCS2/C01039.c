#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int dem=1;
//120
while(n>9)
{
	
n=n/10;//n=12>9 n=1<9 thoat
dem++;//dem=2 dem=3
}
printf("%d",dem);
}
