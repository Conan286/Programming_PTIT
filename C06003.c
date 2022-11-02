#include<stdio.h>
#include<string.h>
int count(char s[],int n)
{
int i,dem=1;
/*
xet cac th dac biet: +co dau cach o dau/cuoi
a[i] a[i-1] neu a[i]==' '&&a[i]!=a[i-1] dem++;
  nguyen van a
        1
            2 
Lap trinh     C va C++     
   1     2     3  4    
ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd             
       1           
 mail   abcd@  
     1       2       
            
            
            
            
            
  nguyen van a
3
   
Lap trinh     C va C++   
5
ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd
2
*/


for( i=1;i<n;i++)
{
	if(s[i]==' '&&s[i-1]!=s[i]) 
	{
	    dem++;
}
}
return (s[n-1]==' '?(--dem):dem);
}
int main()
{
	
	int t,i;
		
	scanf("%d",&t);

char s[20002];
	while(t--){
	    
	fflush(stdin);
		gets(s);
			fflush(stdin);
int n=strlen(s);
printf("%d\n",count(s,n));
}
}
