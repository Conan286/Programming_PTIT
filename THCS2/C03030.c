#include<stdio.h>
#include<math.h>
//input bao 0<n<7 nhung xet ca th n=8 thi moi AC :> 
int a(int n)
{

switch(n){
	case 1:
	return 1;
	break;
		case 2:
		return 11;
		break;
		case 3:
		return 111;
		break;
		case 4:
		return 1111;
		break;
		case 5:
		return 11111;
		break;
		case 6:
		return 111111;
		break;
		case 7:
		return 1111111;
		break;
		case 8:
		return 11111111;
		break;
}
}
int b(int n)
{

switch(n){
	
	    case 1:
	    	return 9;
	    	break;
		case 2:
		return 99;
		break;
		case 3:
		return 999;
		break;
		case 4:
		return 9999;
		break;
		case 5:
		return 99999;
		break;
		case 6:
		return 999999;
		break;
		case 7:
		return 9999999;
		break;
		case 8:
			return 99999999;
			break;
}
}
int test(int n)
{
while(n>9)
{
	int a=n%10,b=(n/10)%10;
	if(a<b) {
	return 0;
	}
	n=n/10;
}
return 1;
}

int main()
{
int t;
int n,i;
		scanf("%d",&t);
		while(t--)
		{
		scanf("%d",&n);
		//1<n<7	
		for( i=a(n);i<=b(n);i++){
		
		if(test(i)==1){
			printf("%d ",i);
}
		}
		printf("\n");
}
}
