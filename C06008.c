#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
int main()
{
	char s[1001];
	nhapchuoi(s);
	char cnt[1001][1001];
	int index[1001];
	
	char *token=strtok(s," ");
	int n=0,i=0,j,k=0;
	for(i=0;i<1001;i++) index[i]=1;
	while(token!=NULL)
	{
		strcpy(cnt[n],token);
		++n;
		token=strtok(NULL," ");
	}
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++)
		{
			if( strcmp(cnt[i],cnt[j])==0){
			//	printf("\ntrung tai j=%d\n",j);
			
			 index[j]=0;
			 
		}
	}
}
	for(j=0;j<n;j++){
		if(index[j]){
			 printf("%s ",cnt[j]);
		}
}
	
}

