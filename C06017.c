#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)
#define nhap(n) scanf("%d",&n)
int main()
{
	char s1[1001],s2[1001];
	nhapchuoi(s1);
	nhapchuoi(s2);
	char tu1[1001][101],tu2[1001][101],chuoi[1001][1001];
	int n1=0,n2=0,i,j;
	//tach tu trong xau 1
	char *token1=strtok(s1," ");
	while(token1!=NULL)
	{
		strcpy(tu1[n1],token1);
		n1++;
		token1=strtok(NULL," ");
	}
	//tach tu xau 2
	char *token2=strtok(s2," ");
	while(token2!=NULL)
	{
		strcpy(tu2[n2],token2);
		n2++;
		token2=strtok(NULL," ");
	}
	int id[n1];
		for(i=0;i<n1;i++) id[i]=1;
		//nhung tu xau1 co trong xau 2 thi id=0
	for(i=0;i<n1;i++) {
		for(j=0;j<n2;j++)
		{
			if(strcmp(tu1[i],tu2[j])==0) id[i]=0;
		}
	}
	//dem tan suat cac tu trong xau 1
	int vitri[n1];
		for(i=0;i<n1;i++) vitri[i]=1;
	for(i=0;i<n1;i++) {
	for(j=n1-1;j>i;j--)
	{
		//nhung tu bi trung thi vitri =0
		if(strcmp(tu1[i],tu1[j])==0) vitri[j]=0;
	}
	}
	//copy nhung tu can in vao chuoi
	int idc=0;
		for(i=0;i<n1;i++)
		{
			if(vitri[i]&&id[i]){
			strcpy(chuoi[idc],tu1[i]);
			++idc;
		}
}
//sapxep theo thu tu tu dien]
char temp[1001];
for(i=0;i<idc;i++)
{
	for(j=idc-1;j>i;j--)
	{
		if(strcmp(chuoi[j],chuoi[i])<0)
		{
			strcpy(temp,chuoi[j]);
			strcpy(chuoi[j],chuoi[i]);
			strcpy(chuoi[i],temp);
		}
	}
}
//in ra
for(i=0;i<idc;i++) printf("%s ",chuoi[i]);
}

