#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[10001];
		scanf("%s",&s);
		int dkc=1,i;
		for(i=0;i<strlen(s);i++)
		{
			if(s[0]=='0'||s[i]<'0'||s[i]>'9')
			{
				dkc=0;
				printf("INVALID\n");
				break;
			}
		}
		if(dkc)
		{
			int chan=0,le=0;
			for(i=0;i<strlen(s);i++)
			{
				(s[i]-'0')%2==0?(++chan):(++le);
			}
			if((strlen(s)%2==0&&chan>le)||(strlen(s)%2!=0&&le>chan)) {
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}

