#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_ft(int *num){
	*num = 42;
}

int main(){
	int num;
	ft_ft(&num);
	printf("%d", num);
	return 0;
}
