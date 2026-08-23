#include<stdio.h>
#include "ft_abs.h"

int main(){
	int val = 5;
	int val1 = -5;
	int val2 = 0;
	printf("%d\n", ABS(val));
	printf("%d\n", ABS(val1));
	printf("%d\n", ABS(val2));
	printf("%d\n", ABS(val - val1));
	return 0;
}
