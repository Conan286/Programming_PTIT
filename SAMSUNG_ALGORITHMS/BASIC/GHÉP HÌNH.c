#include<stdio.h>
int dai(int a,int b)
{
	return (a>b?a:b);
}
int rong(int a,int b)
{
	return (a<b?a:b);
}
int main()
{
int a1,a2,b1,b2,c1,c2,t;
scanf("%d",&t);
while(t--){
scanf("%d %d",&a1,&a2);
scanf("%d %d",&b1,&b2);
scanf("%d %d",&c1,&c2);
int d1=dai(a1,a2);
int r1=rong(a1,a2);
int d2=dai(b1,b2);
int r2=rong(b1,b2);
int d3=dai(c1,c2);
int r3=rong(c1,c2);
/*
8 2
6 1
7 6
(b1==c1&&(b2+c2==a1&&a1==a2+b1||b2+c2==a2&&a2=a1+b1))||
(b1==c2&&(b2+c1==a1&&a1==a2+b1||b2+c1==a2&&a2=a1+b1))||
(b2==c1&&(b1+c2==a1&&a1==a2+b2||b1+c2==a2&&a2==a1+b2))||
(b2==c2&&(b1+c1==a1&&a1==a2+b2||b1+c1==a2&&a2==a1+b2))||
(b1==a1&&(b2+a2==c1&&c1=c2+b1||b2+a2==c2&&c2=c1+b1))||
(b1==a2&&(b2+a1==c1&&c1=c2+b1||b2+a1==c2&&c2=c1+b1))||
(b2==a1&&(b1+a2==c1&&c1=c2+b2||b1+a2==c2&&c2=c1+b2))||
(b2==a2&&(b1+a1==c1&&c1=c2+b1||b1+a1==c2&&c2=c1+b2))||
(c1==a1&&(c2+a2==b1&&b1=b2+c1||c2+a2==b2&&b2=b1+c1))||
(c1==a2&&(c2+a1==b1&&b1=b2+c1||c2+a1==b2&&b2=b1+c1))||
(c2==a1&&(c1+a2==b1&&b1=b2+c2||c1+a2==b2&&b2=b1+c2))||
(c2==a2&&(c1+a1==b1&&b1=b2+c2||c1+a1==b2&&b2=b1+c2))
*/
if((d1==d2&&d2==d3&&r1+r2+r3==d1)||(b1==c1&&(b2+c2==a1&&a1==a2+b1||b2+c2==a2&&a2==a1+b1))||(b1==c2&&(b2+c1==a1&&a1==a2+b1||b2+c1==a2&&a2==a1+b1))||(b2==c1&&(b1+c2==a1&&a1==a2+b2||b1+c2==a2&&a2==a1+b2))||(b2==c2&&(b1+c1==a1&&a1==a2+b2||b1+c1==a2&&a2==a1+b2))||(b1==a1&&(b2+a2==c1&&c1==c2+b1||b2+a2==c2&&c2==c1+b1))||(b1==a2&&(b2+a1==c1&&c1==c2+b1||b2+a1==c2&&c2==c1+b1))||(b2==a1&&(b1+a2==c1&&c1==c2+b2||b1+a2==c2&&c2==c1+b2))||(b2==a2&&(b1+a1==c1&&c1==c2+b1||b1+a1==c2&&c2==c1+b2))||(c1==a1&&(c2+a2==b1&&b1==b2+c1||c2+a2==b2&&b2==b1+c1))||(c1==a2&&(c2+a1==b1&&b1==b2+c1||c2+a1==b2&&b2==b1+c1))||(c2==a1&&(c1+a2==b1&&b1==b2+c2||c1+a2==b2&&b2==b1+c2))||(c2==a2&&(c1+a1==b1&&b1==b2+c2||c1+a1==b2&&b2==b1+c2))){
	printf("YES\n");
}
else{
	printf("NO\n");
}
}
}
