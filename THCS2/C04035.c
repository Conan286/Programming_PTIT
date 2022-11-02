#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define nhap(n) scanf("%d",&n);
#define print(n) printf("%d ",n);
void swap(int *a,int *b);
int max(int a,int b);
int min(int a,int b);
int time(int l[],int x[],int n);
int main()
{
	int n,i,j;
	nhap(n);
	int l[n],x[n];
	for(i=0;i<n;i++) scanf("%d %d",&l[i],&x[i]);
	print(time(l,x,n))
	
}
int time(int l[],int x[],int n)
{
	int len=l[0],xuong=x[0],min_len=l[0],min_xuong=x[0],i;
	for(i=1;i<n;i++) {
		len+=l[i];
		xuong+=x[i];
		min_len=min(min_len,l[i]);
		min_xuong=min(min_xuong,x[i]);
	}
	if(len>xuong) return len+min_xuong;
	else return xuong+min_len;
}
int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}

