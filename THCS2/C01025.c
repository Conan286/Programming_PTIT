#include<stdio.h>
#include<math.h>
int max(int a,int b)
{
	return (a>b?a:b);
}
int min(int a,int b)
{
	return (a<b?a:b);
}
int main()
{
int x1,y1,x2,y2,x3,y3,x4,y4;
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
/*
ip:
6 6 8 8
1 8 4 9
op: 
49
*/
int max_x,min_x,max_y,min_y;
max_x=(max(x1,x2)>max(x3,x4)?max(x1,x2):max(x3,x4));
max_y=(max(y1,y2)>max(y3,y4)?max(y1,y2):max(y3,y4));
min_x=(min(x1,x2)<min(x3,x4)?min(x1,x2):min(x3,x4));
min_y=(min(y1,y2)<min(y3,y4)?min(y1,y2):min(y3,y4));
int d=(max_x-min_x)>(max_y-min_y)?(max_x-min_x):(max_y-min_y);
printf("%d",d*d);
}

