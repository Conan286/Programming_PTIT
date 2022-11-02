#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s);
#define in(t) scanf("%d",&t);
int main()
{
	int t;
	in(t);
	while(t--)
	{
		char so1[1001],so2[1001];
		int s1[1001],s2[1001],sum[1001];
		scanf("%s",&so1);
		scanf("%s",&so2);
	    int i,j,n1=strlen(so1),n2=strlen(so2),n=strlen(so1)>strlen(so2)?strlen(so1):strlen(so2);
	    int l1=0,l2=0,r1=strlen(so1)-1,r2=strlen(so2)-1;
	    //dao nguoc xau s1
	    while(l1<=r1)
	    {
	    	char temp= so1[r1];
	    	so1[r1]=so1[l1];
	    	so1[l1]=temp;
	    	l1++;
	    	r1--;
		}
		//daonguoc xau 2
		while(l2<=r2)
	    {
	    	char temp= so2[r2];
	    	so2[r2]=so2[l2];
	    	so2[l2]=temp;
	    	l2++;
	    	r2--;
		}
		//s1
		for(i=0;i<n1;i++)
		{
			s1[i]=so1[i]-'0';
		}
		//s2
		for(i=0;i<n2;i++)
		{
			s2[i]=so2[i]-'0';
		}
		if(n1>n2)
		{
			for(i=n2;i<n1;i++)
			s2[i]=0;
		}
		else{
			for(i=n1;i<n2;i++)
			s1[i]=0;
		}
	/*	printf("n=%d\n",n);
		for(i=0;i<n;i++) printf("%d",s1[i]);
		printf("\n");
		for(i=0;i<n;i++) printf("%d",s2[i]);*/
		int nho=0;
		for(i=0;i<n-1;i++)
		{
			
		sum[i]=(s1[i]+s2[i]+nho)%10;
		nho=s1[i]+s2[i]+nho>9?1:0;	
		}
		sum[n-1]=s1[n-1]+s2[n-1]+nho;
		for(j=n-1;j>=0;j--) printf("%d",sum[j]);
		printf("\n");
	}
}

