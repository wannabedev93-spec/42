#include<stdio.h>

int ft_str_is_alpha(char *str){
	if(!*str) return 1;
	while(*str){
		if((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')) return 0;
		str++;
	}
	return 1;
}

int main(){

	char *test1 = "SDFref";
	char *test2 = "84jjndf";
	char *test3 = "";

	printf("test1 -> %d\n",ft_str_is_alpha(test1));
	printf("test2 -> %d\n",ft_str_is_alpha(test2));
	printf("test3 -> %d\n",ft_str_is_alpha(test3));
	return 0;
}
