#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define nhap(n) scanf("%d",&n);
#define xuat(n) printf("%d ",n);
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
void soden(int s[],int n,int k)
{
int den=0,toi=0,i,dophu=2*k+1;
	for(i=1;i<n;i++)
	{
		if(!s[i]) {
	//	printf("s[%d]=%d\n",i,s[i]);
		toi++;
	}
		else{
			if(toi>0)
			{
				den+=(toi%dophu==0)?(toi/dophu):((toi/dophu)+1);
				toi=0;
			}
		}
	}
	if(toi>0){
	den+=(toi%dophu==0)?(toi/dophu):((toi/dophu)+1);
}
xuat(den);
//printf("toi=%d\nden=%d\n",toi,den);
//return den;
}

int main()
{
	int n,m,k,i,j;
	nhap(n);
	nhap(m);
	nhap(k);
	//do phu cua 1 den la 2*k+1
	int light[n+1],x;
	memset(light,0,sizeof(light));
	while(m--) {
	nhap(x);
	//printf("2*k+1=%d",2*k+1);
	//printf("j tu %d den %d\n",max(1,x-2*k+1),min(n,x+2*k+1));
    for(j=max(1,x-k);j<=min(n,x+k);j++) {
	light[j]=1;
}
}
//for(i=1;i<=n;i++) printf("%d-%d\n",i,light[i]);
//	printf("%d",soden(light,n+1,k));
soden(light,n+1,k);
}

