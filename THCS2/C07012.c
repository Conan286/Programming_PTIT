#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define in(n) scanf("%d",&n);
#define nhapchuoi(s) scanf("\n%[^\n]s",&s);
typedef struct mathang{
	int id;
	char name[10001];
	char nhom[10001];
	float giamua;
	float giaban;
	float loinhuan;
}mathang;
int main()
{
	int n,i,j;
	in(n);
	mathang mh[n];
	for(i=0;i<n;i++)
	{
		mh[i].id=i+1;
		nhapchuoi(mh[i].name);
		nhapchuoi(mh[i].nhom);
		scanf("%f %f",&mh[i].giamua,&mh[i].giaban);
		mh[i].loinhuan=mh[i].giaban-mh[i].giamua;
	}
	
for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(mh[i].loinhuan>=mh[j].loinhuan)
			{
				mathang temp=mh[j];
				mh[j]=mh[i];
				mh[i]=temp;
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d %s %s %0.2f\n",mh[i].id,mh[i].name,mh[i].nhom,mh[i].loinhuan);
	}
}

