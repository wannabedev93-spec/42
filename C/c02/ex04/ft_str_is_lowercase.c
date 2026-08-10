#include<stdio.h>

int ft_str_is_lowercase(char *str){
	if(!*str) return 1;
	while(*str){
		if(*str < 'a' || *str > 'z') return 1;
		str++;
	}
	return 0;
}

int main(){
	char *test1 = "";
	char *test2 = "jnvkjfEGR";
	char *test3 = "hfvhndvhnv";
	
	printf("test1 -> %d\n", ft_str_is_lowercase(test1));
	printf("test2 -> %d\n", ft_str_is_lowercase(test2));
	printf("test3 -> %d\n", ft_str_is_lowercase(test3));
	return 0;
}
