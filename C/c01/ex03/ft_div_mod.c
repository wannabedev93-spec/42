#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
	*mod = a % b;
	*div = a / b;	
}

int main(){

	int a = 11;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a,b,&div,&mod);
	printf("div is %d and mod is %d\n", div, mod);
	return 0;	
}
