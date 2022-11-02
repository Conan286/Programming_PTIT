#include<stdio.h>
#define cin(n) scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define for(i,a,b) for(i=a;i<=b;i++)
#define end puts("");
main()
{
int n,i;
cin(n)
for(i,0,n-1){
if(i&1) cout(1)
else cout(0)
}
end
for(i,1,n)
{
if(i&1) cout(1)
else cout(0)
}
}
