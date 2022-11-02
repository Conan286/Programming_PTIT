#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct sinhvien{
		int stt;
	char name[1001];
	char birthday[1001];
	float mon1;
	float mon2;
	float mon3;
float sum;
	

}sinhvien;

int main()
{
	int n,i,j;
	scanf("%d",&n);
	 sinhvien sv[n];
	for(i=0;i<n;i++)
	{
		sv[i].stt=i+1;
		scanf("\n%[^\n]s", sv[i].name);
		fflush(stdin);
		scanf("%s",&sv[i].birthday);
		fflush(stdin);
		scanf("%f %f %f",&sv[i].mon1,&sv[i].mon2,&sv[i].mon3);
sv[i].sum=sv[i].mon1+sv[i].mon2+sv[i].mon3;
	}
/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
4.5
4.5
5.0
*/
for(i=0;i<n;i++)
{
	
	for(j=i+1;j<n;j++)
	{
	if(sv[i].sum>=sv[j].sum)
	{
		sinhvien t=sv[j];
		sv[j]=sv[i];
		sv[i]=t;
		}	
	}
}
for(i=n-1;i>=0;i--)
{
	printf("%d %s %s %0.1f\n",sv[i].stt,sv[i].name,sv[i].birthday,sv[i].sum);
}
}

