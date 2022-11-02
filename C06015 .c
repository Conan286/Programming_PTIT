#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define in(n) scanf("%d",&n);
#define nhapchuoi scanf("\n%[^\n]s",&s);
int main()
{
	int t;
	in(t);
	while(t--)
	{
		char s[1001];
		nhapchuoi(s);
		int n=strlen(s);
		char full[1001],name[1001];
		int i=0,j=0,k=0,index=0,h=0;
		//xoa khoang trang o dau xau
		for(i=0;i<n;i++)
		{
			while(s[0]==' '){
				for(j=0;j<n;j++)
				{
					s[j]=s[j+1];
					
				}
				n--;
			}
		}
		//xoa khoang trang o cuoi xau
		
		while(s[n-1]==' ')
		{
			n--;
		}
		//xoa khoang trang o giua xau
		for(i=1;i<n-1;i++)
		{
			while(s[i]==' '&&s[i-1]==' ')
			{
				for(j=i;j<n;j++)
				{
					s[j]=s[j+1];
					
				}
				n--;
			}
		}
		//chuyen ve chu thuong
		for(i=0;i<n;i++)
		{
			if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
		}
		
		//chu hoa
		for(i=1;i<n-1;i++)
		{
			if(s[i-1]==' ') s[i]-=32;
		}
		//xau Ho
		for(i=0;i<n;i++)
		{
			if(s[i]==' ') {
				index=i;
			break;
		}
		name[k++]=s[i]-32;
	}
	//lay phan con lai 
	for(i=index+1;i<n;i++)
	{
		full[h++]=s[i];
	}
	full[h++]=',';
	full[h++]=' ';
	for(i=0;i<k;i++)
	{
		full[h++]=name[i];
	}
	full[h]='\0';
	printf("%s\n",full);
}
}

