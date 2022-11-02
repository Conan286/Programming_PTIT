#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j;
	char s[10001];
	scanf("%d",&t);
	while(t--)
	{
		fflush(stdin);		
		scanf("\n%[^\n]s",&s);
		fflush(stdin);
		int n=strlen(s);
		//xoa khoang trang dau xau
		while(s[0]==' ')
		{
			for(i=0;i<n-1;i++)
			{
				s[i]=s[i+1];
			}
			n--;
		}
		//xoa khoang trang cuoi xau
		while(s[n-1]==' ')
		{
			n--;
		}
			//xoa khoang trang thua o giua
		for(i=1;i<n;i++)
		{
			// nguyen   van a
			 //      1234567
			while(s[i]==' '&&s[i-1]==' ')
			{
				for(j=i;j<n-1;j++)
				{
					s[j]=s[j+1];
				}
				n--;
			}
		}
		//xoa ki tu dacbiet
		for(i=0;i<n;i++)
		{
			while(s[i]!=' '&&(s[i]<'A'||s[i]>'z'||(s[i]>'Z'&&s[i]<'a'))) {
				for(j=i;j<n-1;j++)
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
		s[0]-=32;
		for(i=1;i<n;i++)
		{
			if(s[i]!=' '&&s[i-1]==' ') s[i]-=32;
		}
		//
		char name[n];
		for(i=0;i<n;i++)
		{
			name[i]=s[i];
		}
		name[n]='\0';
		printf("%s\n",name);
	}
}



