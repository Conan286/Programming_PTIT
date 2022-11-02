#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
int main()
{
	int n=0,i=0,j,k=0;
	char s[1001];
	nhapchuoi(s);
	for(i=0;i<strlen(s);i++)
	if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	
	char cnt[1001][1001];
	int index[1001],id[1001];
	
	char *token=strtok(s," ");
	
	for(i=0;i<1001;i++) {
	index[i]=1;
	id[i]=1;
}
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
			
			 index[i]++;
			 id[j]=0;
		}
	}
}
	for(j=0;j<n;j++){
		if(index[j]>0&&id[j]>0){
		
			 printf("%s %d\n",cnt[j],index[j]);
			 index[j]=0;
		}
}
}
