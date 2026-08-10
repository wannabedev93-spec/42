#include<stdio.h>

void ft_swap(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main(){
	int a = 5;
	int b = 3;
	printf("a is %d, b is %d\n", a, b);
	ft_swap(&a, &b);
	printf("a is %d, b is %d\n", a, b);
	return 0;
}
