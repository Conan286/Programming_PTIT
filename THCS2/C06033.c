#include<string.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define re(n) scanf("%d",&n);
#define restr(s) scanf("%s",&s);
#define wr(n) printf("%d\n",n );
void tron(char s1[],char s2[],char s[],int n)
{
	int i,j=0;	
	for(i=0;i<n;i++)
	{
		s[j++]=s2[i];
		s[j++]=s1[i];
	}
	s[j]='\0';
//	printf("%s\n",s);
}
void tach(char s1[],char s2[],char s[],int n){
	int i,j=0;
	for(i=0;i<n;i++) s1[i]=s[j++];
	for(i=0;i<n;i++) s2[i]=s[j++];
//	printf("%s\n%s\n",s1,s2);
}
void solve(char s1[],char s2[],char s[],int n)
{
	int i,j=0,buoc=0,check=0;
	char t1[n],t2[n],temp[2*n+5];
	strcpy(temp,s);
	strcpy(t1,s1);
	strcpy(t2,s2);
    while(1)
    {
    	++buoc;
    	tron(s1,s2,s,n);
    	tach(s1,s2,s,n);
    	if(!strcmp(s,temp))
	{
		check=1;
		wr(buoc);
		break;
	}
    	if(!strcmp(s1,t1)&&!strcmp(s2,t2)){
		break;
	}
	
	}
	if(!check) puts("-1");
}
main()
{
	int n;
	while(1)
	{
            re(n)
            if(n==0) break;
			char s1[n],s2[n],s[2*n+5];
	     	restr(s1);
			restr(s2);
			restr(s);
		solve(s1,s2,s,n);
		
	}
}

