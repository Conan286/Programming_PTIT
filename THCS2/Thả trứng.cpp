#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define cin(n) scanf("%d",&n);
#define fcout(a,b) printf("%d-%d\n",a,b);
#define cout(a) printf("%d\n",a);
main()
{
int n;
cin(n)
int cnt=1;
while(n-cnt>0){
n-=cnt++;
}
cout(cnt>n?cnt:n)
}


