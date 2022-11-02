#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	
char s[100];
int b[10001];
scanf("%d",&t);
while(t--){

long long n=0;
scanf("%s",&s);
int k=strlen(s);
int index=1,dem=0;
for(i=0;i<k;i++)
{
	if(s[i]!='0'&&s[i]!='1'&&s[i]!='8'&&s[i]!='9')
	{
		index=0;
		break;
	}
	else{
	
	s[i]=(s[i]=='1')?'1':'0';
if(s[i]=='1') {
	//dem so phan tu khac 0
	dem++;
}
}
}

if(index==1&&dem>0)
{


	for(i=0;i<k;i++)
	{
		b[i]=0;
			b[i]=s[i]-'0';
		//	printf("b[%d]=%d\n",i,b[i]);
		n=n*10+b[i];
	}
	printf("%lld\n",n);
}
else
{
	printf("INVALID\n");
}
}
}
