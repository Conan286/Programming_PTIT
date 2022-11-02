#include<stdio.h>
#include<math.h>
int main()
{
int i,t;
int n;
scanf("%d",&t);
while(t--)
{
	
	scanf("%d",&n);
	//12
	int dem=(n%2==0)?1:0;//1
for( i=2;i<=sqrt(n);i++)
{
//i:2-3
		if(i%2==0&&n%i==0){
			dem++;
			
			}
			if((n/i)%2==0&&(n/i)!=i&&n%i==0){
			dem++;
		}
		}
			

printf("%d\n",dem);
}
}
