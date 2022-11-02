#include<stdio.h>
#include<math.h>
int main()
{
int n;
//while(1000<9999){
scanf("%d",&n);
long long cuoi=n%10;
//12340
//cuoi=0
int dau=n;
//dau=12340
int mu=0;
while(dau>9){
//
mu++;
//1 1234
//2 123
//3 12
//4 1
//mu=4
dau=dau/10;
}
//mu=4
int giua=n-pow(10,mu)*dau-cuoi;
//giua=12340-10^4*1-0=2340
//printf("\nmu=%d\n",mu);
//mu=4
//printf("\ndau=%d\n",dau);
//dau=1
//printf("\ngiua=%d\n",giua);
//giua=2340
//printf("\ncuoi=%d\n",cuoi);
//cuoi=0
int result=cuoi*pow(10,mu)+giua+dau;//=0*10^4+2340+1=2341
//in ra cuoi*pow(10,mu)+bcd0+dau
printf("%d",result);
//in ra 2341
//e!=0 cuoi=n%10
//ebcda
//e==0
//bcda
//}
}
#include<stdio.h>
#include<math.h>
int main()
{
int n;
//while(1000<9999){
scanf("%d",&n);
long long cuoi=n%10;
//12340
//cuoi=0
int dau=n;
//dau=12340
int mu=0;
while(dau>9){
//
mu++;
//1 1234
//2 123
//3 12
//4 1
//mu=4
dau=dau/10;
}
//mu=4
int giua=n-pow(10,mu)*dau-cuoi;
//giua=12340-10^4*1-0=2340
//printf("\nmu=%d\n",mu);
//mu=4
//printf("\ndau=%d\n",dau);
//dau=1
//printf("\ngiua=%d\n",giua);
//giua=2340
//printf("\ncuoi=%d\n",cuoi);
//cuoi=0
int result=cuoi*pow(10,mu)+giua+dau;//=0*10^4+2340+1=2341
//in ra cuoi*pow(10,mu)+bcd0+dau
printf("%d",result);
//in ra 2341
//e!=0 cuoi=n%10
//ebcda
//e==0
//bcda
//}
}

