#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	
	char x1[1001],x2[1001];
	int so1[101],so2[101],i,summax[1001],summin[1001];
	scanf("%s %s",x1,x2);
	fflush(stdin);
	int n=strlen(x1)>strlen(x2)?strlen(x1):strlen(x2);
	/*
	dao chuoi
	9999    9999
	 336    633
	 9999
	 6330
	 53310->10335
	*/
	int l1=0,r1=strlen(x1)-1;
	int l2=0,r2=strlen(x2)-1;
	while(l1<=r1)
	{
		int temp=x1[r1];
		x1[r1]=x1[l1];
		x1[l1]=temp;
		l1++;
		r1--;
	}
		while(l2<=r2)
	{
		int temp=x2[r2];
		x2[r2]=x2[l2];
		x2[l2]=temp;
		l2++;
		r2--;
	}
	/*
	
	*/
	for(i=0;i<strlen(x1);i++)
	{
		so1[i]=x1[i]-'0';
		
	}
		for(i=0;i<strlen(x2);i++)
	{
		so2[i]=x2[i]-'0';
	}
	if(strlen(x1)>strlen(x2))
	{
		for(i=strlen(x2);i<strlen(x1);i++)
		{
			so2[i]=0;
		}
	}
	if(strlen(x1)<strlen(x2))
	{
		for(i=strlen(x1);i<strlen(x2);i++)
		{
			so1[i]=0;
		}
	}
	//summin
	int nho=0;
	for(i=0;i<n-1;i++)
	{
		summin[i]=0;

	summin[i]=((so1[i]==6?5:so1[i])+(so2[i]==6?5:so2[i])+nho)%10 ;
	nho=((so1[i]==6?5:so1[i])+(so2[i]==6?5:so2[i])+nho)>9?1:0;

	}
	summin[n-1]=0;
	i=n-1;

	summin[n-1]+=(so1[i]==6?5:so1[i])+(so2[i]==6?5:so2[i])+nho;
		int l3=0,l4=0,r3=n-1,r4=n-1;
		while(l3<=r3)
		{
		int temp=	summin[l3];
		summin[l3]=summin[r3];
		summin[r3]=temp;
		l3++;
		r3--;
		}
	/*for(i=0;i<n;i++)
	{
		printf("%d",so1[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",so2[i]);
	}*/
	//summax
	 nho=0;
	for(i=0;i<n-1;i++)
	{
		summax[i]=0;
//	so1[i]=(so1[i]==5)?6:so1[i];
//	so2[i]=(so2[i]==5)?6:so2[i];
	summax[i]=((so1[i]==5?6:so1[i])+(so2[i]==5?6:so2[i])+nho)%10 ;
	nho=((so1[i]==5?6:so1[i])+(so2[i]==5?6:so2[i])+nho)>9?1:0;

	}
	summax[n-1]=0;
	i=n-1;
//	so1[n-1]=(so1[n-1]==5)?6:so1[n-1];
	//so2[n-1]=(so2[n-1]==5)?6:so2[n-1];
	summax[n-1]+=(so1[i]==5?6:so1[i])+(so2[i]==5?6:so2[i])+nho;
	while(l4<=r4)
		{
		int temp=	summax[l4];
		summax[l4]=summax[r4];
		summax[r4]=temp;
		l4++;
		r4--;
		}
		long long smin=0,smax=0;
		for(i=0;i<n;i++)
		{
			smin=smin*10+summin[i];
			smax=smax*10+summax[i];
		}
	
			printf("%lld %lld",smin,smax);
		
		printf("\n");
}
}

