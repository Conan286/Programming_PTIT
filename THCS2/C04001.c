#include<stdio.h>
#include<math.h>


int main()
{
int n,t;
int i;
scanf("%d",&t);

while(t--){

scanf("%d",&n);
 int a[101];
for( i=0;i<n;i++){
	scanf("%d",&a[i]);
}

for( i=0;i<n;i++){
if(a[i]%2==0) {
 
printf("%d ",a[i]);

}
}
printf("\n");
}
}
