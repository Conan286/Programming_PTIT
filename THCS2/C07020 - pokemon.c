#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
#define int long long
#define nhap(n) scanf("%lld",&n);
typedef struct pokemon{
	char name[1001];
	int k,n;
	int socontienhoa;
}pokemon;
void getinfor(struct pokemon a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("\n%[^\n]s",&a[i].name);
		scanf("%lld %lld",&a[i].k,&a[i].n);
	}
}
int soluongmax(int k,int n)
{
	//35 96
	//2  26+2*2=30
	if(n<k) return 0;
	int socon=0,soda=n;
	while(soda>=k)
	{
		int t=soda/k;//=2
		socon+=t;//=2
		soda=soda-t*k+t*2;//=96-2*35+2*2=30
	}
	return socon;
}
main()
{
	int n,i,sum=0,p_max=0;
	nhap(n);
	pokemon a[n];
		getinfor(a,n);
	for(i=0;i<n;i++) a[i].socontienhoa=soluongmax(a[i].k,a[i].n);
for(i=0;i<n;i++) sum+=a[i].socontienhoa;
for(i=0;i<n;i++){
	if(a[i].socontienhoa>p_max) {
		p_max=a[i].socontienhoa;
		}
}
printf("%lld\n",sum);
for(i=0;i<n;i++){
if(a[i].socontienhoa==p_max){
printf("%s\n",a[i].name);
break;
}
}
}

