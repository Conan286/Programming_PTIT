#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdbool.h>
#define nhap(n) scanf("%d",&n);
#define ll long long
bool check(int a[],int n)
{
	ll k[n];
	int i,j;
	for(i=0;i<n;i++) k[i]=(ll)a[i]*a[i];
	for(i=n-1;i>1;i--){
		int l=0,r=i-1;
		while(l<r)
		{
			if(k[l]+k[r]==k[i]) return 1;
			else if(k[l]+k[r]>k[i]) r--;
			else l++;
		}
	}
	return 0; 
}
void nhaparr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) nhap(a[i]);
}
int cmp(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}
void prin(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
	puts(" ");
}
main()
{
	int t,n,i,j;
	nhap(t);
	while(t--)
	{
	nhap(n);
	int a[n];
	nhaparr(a,n);
	qsort(a,n,sizeof(int),cmp);
	if(check(a,n)) puts("YES");
	else puts("NO");
		}
}

