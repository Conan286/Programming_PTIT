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
		char so1[1001],so2[1001],solon[1001],sobe[1001];
		int sl[1001],sb[1001],hieu[1001];
		scanf("%s",&so1);
		scanf("%s",&so2);
	    int i,j,n1=strlen(so1),n2=strlen(so2);
	    int max=n1>n2?n1:n2,min=n1<n2?n1:n2;
	    //phan biet so lon va so be:
	    if(n1<n2)
	    {
	    //	printf("th1:\n");
	    	for(i=0;i<n1;i++) sobe[i]=so1[i];
	    	for(i=0;i<n2;i++) solon[i]=so2[i];
	    	}
		else if(n1>n2)
		{
		//	printf("th2:\n");
		for(i=0;i<n1;i++) solon[i]=so1[i];
	    for(i=0;i<n2;i++)  sobe[i]=so2[i];	
		}
		else if(n1==n2)
		{
		//	printf("th3:\n");
		int id1=0,id2=0;
			for(i=0;i<n1;i++)
			{
				
				if(so1[i]>so2[i]||so1[i]<so2[i]) {
					so1[i]>so2[i]?(++id1):(++id2);
					break;
				}
			}
				if(id1)
				{
					for(i=0;i<n1;i++) solon[i]=so1[i];
	    for(i=0;i<n2;i++)  sobe[i]=so2[i];
				}
			else
				{
					for(i=0;i<n1;i++) sobe[i]=so1[i];
	    	for(i=0;i<n2;i++) solon[i]=so2[i];
				}
			}
		
/*
		for(i=0;i<max;i++)
	    printf("%c",solon[i]);
	    printf("\n");
	    for(i=0;i<min;i++)
	    printf("%c",sobe[i]);
	    printf("\n");
	    */
	    //lay so lon - so be
	    /*
	    1234567-99=1234468
	    7654321
	    9900000
	    8644321
	    1234468
	    125-99=26
	    521
	    990
	    620
	    026
	    199-123=076
	    991
	    321
	    670
	    
	    
	    
	    
		7654321
		99
		 
		*/
	    
	    for(i=0;i<max;i++) sl[i]=solon[max-i-1]-'0';
	    for(i=0;i<min;i++) sb[i]=sobe[min-i-1]-'0';
	    for(i=min;i<max;i++) sb[i]=0;
	    int nho=0;
	    for(i=0;i<max;i++)
	    {
	    	
	    	hieu[i]=(sl[i]-sb[i]-nho>=0)?(sl[i]-sb[i]-nho):(sl[i]-sb[i]+10-nho);
	    //	printf("%d-%d-%d\n",sl[i],sb[i],hieu[i]);
	    	nho=sl[i]-sb[i]-nho>=0?0:1;
		}
		while(hieu[max-1]==0) max--;
		for(i=max-1;i>=0;i--)
		printf("%d",hieu[i]);
		printf("\n");
		
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	}
}

	    

