#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define in(n) scanf("%f",&n)
#define nhapchuoi(s) scanf("\n%[^\n]s",&s)

 main()
{
	
	int t,i;
	scanf("%d",&t);

	while(t--){
	float xa,xb,xc,ya,yb,yc;
		in(xa);in(ya);
		in(xb);in(yb);
		in(xc);in(yc);
		
	float ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	float bc=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
	float ac=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
		if(ab+ac>bc&&fabs(ab-ac)<bc)
			printf("%.3f\n",ab+bc+ac);
			
		
		else
			puts("INVALID");
		
	}
	
}


