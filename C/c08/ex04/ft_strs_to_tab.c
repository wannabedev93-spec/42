#include<stdlib.h>
#include"ft_stock_str.h"

int ft_strlen(char *str){

	int len = 0;
	while(*str){
		len++;
		str++;
	}
	return len;
}

void ft_strcpy(char *out, char *str){
	while(*str){
		*out = *str;
		out++;
		str++;
	}
	*out = '\0';
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
	t_stock_str *result = malloc(sizeof(t_stock_str) * (ac + 1));
	if(!result) return NULL;
	int len;
	int i = 0;
	while(*av){
		len = ft_strlen(*av);
		result[i].size = len;
		result[i].str = malloc(len + 1);
		result[i].copy = malloc(len + 1);
		if(!result[i].str || !result[i].copy){
			do{
			free(result[i].str);
			free(result[i].copy);
			i--;
			}while (i >= 0);
			free(result);
			return NULL;
			}
		ft_strcpy(result[i].str,*av);
		ft_strcpy(result[i].copy,*av);
		i++;
		av++;
	}
	result[i].size = 0;
        result[i].str = 0;
        result[i].copy = 0;
	return result;
}
