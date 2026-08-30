#include <stdio.h>
#include <math.h>
int main () {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int res=fmin(a,b);
	res=fmin(res,c);
	printf("%d",res);
}

