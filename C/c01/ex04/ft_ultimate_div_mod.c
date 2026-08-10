#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
	int an;
	int bn;
	bn = *a % *b;
	an = *a / *b;
	*b = bn;
	*a = an;
}


int main(){
	int a = 5;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
	printf("a is %d and b is %d\n", a, b);
	return 0;
}
