#include <stdio.h>
int main()
{
	int a,b,c,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a > b){
		if(b > c)
			min = c;
		else
			min = b;
	}
	else{
		if(a > c)
			min = c;
		else
			min = a;
	}
	printf("가장 작은 수 : %d",min);
}