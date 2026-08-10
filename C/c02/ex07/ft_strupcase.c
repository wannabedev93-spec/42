#include<stdio.h>

char *ft_strupcase(char *str){
	char *buffer = str;
	while(*buffer){
		if(*buffer >= 'a' && *buffer <= 'z'){
			*buffer = *buffer - 32;
		}
		else{
			*buffer = *buffer;
		}	
		buffer++;
	}
	return str;
}

int main(){
	char test[] = "jjncdndvkjndf";

	printf("test -> %s\n", ft_strupcase(test));
	return 0;
}
