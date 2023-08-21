#include<stdio.h>
#include<string.h>
#include<math.h>
#define nhap(t) scanf("%d",&t)
#define nhapchuoi(s) scanf("%s",&s)
void xau_con_max(char s[],int n);
int main()
{
	char s[100001];
	nhapchuoi(s);
	int n=strlen(s);
	xau_con_max(s,n);
}
void xau_con_max(char s[],int n)
{
//      abbaba
//0->n-1           max=s[0]  id_max=1 
//id_max+1 -> n-1  max=s[2]  id_max=2
//id_max+1 -> n-1  max=s[3]  id_max=4
//id_max+1 -> n-1  max=s[5]  id_max=5
char max=s[0];
int i,id_max=0;

for(i=0;i<n;i++)
{
	if(s[i]>max) {
	max=s[i];
	id_max=i;
}
}
printf("%c",max);

++id_max;
while(id_max<n)
{
	max=s[id_max];
	for(i=id_max;i<n;i++)
	{
		if(s[i]>max){
			max=s[i];
			id_max=i;
		}
	}
	printf("%c",max);
	++id_max;
}






	
}
