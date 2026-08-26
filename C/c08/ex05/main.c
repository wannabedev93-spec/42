#include <stdlib.h>
#include "../ex04/ft_stock_str.h"

void ft_putchar(char c);
void ft_puts(char *str);
void ft_show_tab(struct s_stock_str *par);
int ft_strlen(char *str);
void ft_strcpy(char *out, char *str);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv){
	int ac = argc - 1;
	char **av = ++argv;
	t_stock_str *s_str = ft_strs_to_tab(ac,av);
	ft_show_tab(s_str);
	int i = 0;
	while(s_str[i].str){
		free(s_str[i].copy);
		i++;
	}
	free(s_str);
	return 0;
}
