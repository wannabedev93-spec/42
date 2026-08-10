#include<stdio.h>

int ft_str_is_numeric(char *str){
	if(!*str) return 1;
	int alpha;
	int num;
	while(*str){
		if((*str >= 'a' || *str <= 'z') && (*str >= 'A' || *str <= 'Z')) alpha = 1;
		else{
			num = 1;
		}
		str++;
	}
	if(num) return 0;
	else if(alpha){
		return 1;
	}
	return 0;
}

int main(){
	char *test1 = "";
	char *test2 = "nfinfvrgv";
	char *test3 = "4345435435";
	printf("test1 -> %d\n", ft_str_is_numeric(test1));
	printf("test2 -> %d\n", ft_str_is_numeric(test2));
	printf("test3 -> %d\n", ft_str_is_numeric(test3));

	return 0;
}
