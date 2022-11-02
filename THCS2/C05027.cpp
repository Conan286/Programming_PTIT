#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define ll long long
#define nhap(n) scanf("%lld",&n);
#define xuat(n) printf("%lld ",n);
#define N 100001
ll min(ll a,ll b)
{
	return a<b?a:b;
}

main()
{
	ll n,i,j,r=0,c=0;
     nhap(n);
     ll t[n][2];
     for(i=0;i<n;i++)   
	 {
   nhap(t[i][0]); nhap(t[i][1]);
    	 }
    	 r=t[0][0],c=t[0][1];
     for(i=1;i<n;i++)   
	 {
      r=min(t[i][0],r);
    c=min(t[i][1],c);
	 }
	 xuat(r*c);
}
