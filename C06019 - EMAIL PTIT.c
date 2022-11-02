#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define in(n) scanf("%d",&n);
#define nhapchuoi(s) scanf("\n%[^\n]s",&s);
int main()
{
	char s[10001],email[10001],name[10001];
	nhapchuoi(s);
	int n=strlen(s),i,j,k=0,h=0,index=n-1;
	while(s[0]==' ')
	{
		for(i=0;i<n;i++) s[i]=s[i+1];
		n--;
	}
	while(s[n-1]==' ') {
		n--;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	for(i=n-1;i>=0;i--)
	{
		if(s[i]==' '){
			index=i+1;
			break;
		}
	}
	for(i=index;i<n;i++)
	{
		name[k++]=s[i];
	}
	
	email[h++]=s[0];
	for(i=1;i<index;i++)
	{
		if(s[i-1]==' '&&s[i]!=' ')
		email[h++]=s[i];
	}
	for(i=0;i<k;i++) email[h++]=name[i];
	char ptit[102]="@ptit.edu.vn";
	for(i=0;i<12;i++) email[h++]=ptit[i];
	email[h]='\0';
	printf("%s",email);
}

