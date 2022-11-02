#include<stdio.h>
int main()
{
int m,n,i,j,k;
////while(10){

scanf("%d %d",&m,&n);
/*
4 4
1234
2341
3421
4321
// 3 5
12345
23451
34521
*/
for(i=1;i<=m;i++){
	//m=6
	printf("%d",i);
	/*
	      m        n*/
	      for(j=i+1;j<=n;j++ ){printf("%d",j);}
      /*                                m=6   n=4
1        234    2  3  4    j=i+1=2 3 4    0   i=1 j=i-1;j>=1;j--
2        341    3  4  5    j=3 4          1   i=2 j=i-1;j>=1;j--
3        421    4  5  5    j=4           21   i=3 j=3-1;j>=1;j--
4        321   (5)(5)(5)                321   i=4 j  
5        321   (5)(5)(5)                321   i=5
6        321   (5)(5)(5)                321   i=6
	*/
	if(i<=n){
		for(k=i-1;k>0;k--)
		{
			printf("%d",k);
		}
	}
	else{
		for(k=n-1;k>0;k--)
		{
			printf("%d",k);
		}
	}	
	printf("\n");
//}
}
}
