#include "../ex04/ft_stock_str.h"
#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_puts(char *str){
	while(*str){
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void ft_show_tab(struct s_stock_str *par){
	while((*par).str){
		ft_puts((*par).str);
		par++;
	}
}
