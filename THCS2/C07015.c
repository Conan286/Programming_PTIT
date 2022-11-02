#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define in(n) scanf("%d",&n);
typedef struct sinhvien{
	int id;
	char name[1001];
	char ngaysinh[1001];
	float mon1;
	float mon2;
	float mon3;
	float sum;
}sinhvien;
int main()
{
	int n,i,j;
	in(n);
	sinhvien sv[n];
	for(i=0;i<n;i++)
	{
		sv[i].id=i+1;
		scanf("\n%[^\n]s",&sv[i].name);
		fflush(stdin);
		scanf("%s",&sv[i].ngaysinh);
		fflush(stdin);
		scanf("%f %f %f",&sv[i].mon1,&sv[i].mon2,&sv[i].mon3);
		sv[i].sum=sv[i].mon1+sv[i].mon2+sv[i].mon3;
	}
	sinhvien max=sv[0];
	for(i=0;i<n;i++)
	{
		if(sv[i].sum>max.sum) max=sv[i];
	}
	for(i=0;i<n;i++)
	{
		if(sv[i].sum==max.sum) printf("%d %s %s %0.1f\n",sv[i].id,sv[i].name,sv[i].ngaysinh,sv[i].sum);
	}
}


