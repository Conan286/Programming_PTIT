#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#define re(n) scanf("%d",&n);
#define rechuoi(s) scanf("\n%[^\n]s",&s);
#define rediem(a,b,c) scanf("%f %f %f",&a,&b,&c);
#define wr(n) printf("%d\n",n);
typedef struct sinhvien{
int id;
char name[101];
float a,b,c;
}sinhvien;
void sort(sinhvien sv[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(sv[i].a+sv[i].b+sv[i].c>sv[j].a+sv[j].b+sv[j].c)
			{
				sinhvien t=sv[j];
				sv[j]=sv[i];
				sv[i]=t;
			}
		}
	}
}
void prin(sinhvien sv[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d %s %.1f %.1f %.1f\n",sv[i].id,sv[i].name,sv[i].a,sv[i].b,sv[i].c);
}
main()
{
 sinhvien sv[1001];
 int luachon,add,current=0,i,j,msv;
 while(1)
 {
 	re(luachon)
 	if(luachon==1){
 	    	re(add)
			    for(i=current;i<current+add;i++) {
			    sv[i].id=i+1;
		    	re(sv[i].id)
		    	rechuoi(sv[i].name)
		    	rediem(sv[i].a,sv[i].b,sv[i].c)
		    	
		    	
			}
			current+=add;
			wr(add);
			
 	}
 			if(luachon==2){
 				re(msv);
 				rechuoi(sv[msv-1].name);
 				rediem(sv[msv-1].a,sv[msv-1].b,sv[msv-1].c);
 				wr(msv);
 			}
 			if(luachon==3){
 				
 				sort(sv,current);
 				prin(sv,current);
 			break;
	 }
 }
}
