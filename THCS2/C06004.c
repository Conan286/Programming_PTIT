#include<stdio.h>
#include<string.h>
int main()
{ 
char s[10001];
gets(s);
fflush(stdin);
    int i,chucai=0,chuso=0,kytu=0;
	for( i=0;i<strlen(s);i++)
	{
	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
		chucai++;
	}
	else if(s[i]>='0'&&s[i]<='9'){
		chuso++;
	}
	else{
		kytu++;
	}
	}
	printf("%d %d %d",chucai,chuso,kytu);
}

