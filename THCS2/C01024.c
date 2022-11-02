#include<stdio.h>
int main()
{
int n,t;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
int r=n%10;
while(n>=10)
{
n=n/10;
}
if(n==r){
printf("YES\n");
}
else{
printf("NO\n");
}
}
}
