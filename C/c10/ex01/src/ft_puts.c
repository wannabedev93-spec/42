#include"ft_puts.h"

void ft_puts(char *str){
	while(*str){
		ft_putchar(*str);
		str++;
	}
}
