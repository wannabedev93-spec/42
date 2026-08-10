#include <stdio.h>

int ft_str_is_printable(char *str){
	while(*str){
		if(!(*str <= 31 || *str == 127)){
			return 0;
		}
		str++;
	}
	return 1;
}

int main(){
	char *test1 = "";
	char *test2 = "jfhidfnnhgn";
	char *test3 = "\a";
	printf("test1 -> %d\n", ft_str_is_printable(test1));
	printf("test2 -> %d\n", ft_str_is_printable(test2));
	printf("test3 -> %d\n", ft_str_is_printable(test3));

	return 0;
}
