#include<stdio.h>

char *ft_strlowcase(char *str){
	char *buffer = str;
	while(*buffer){
		if(*buffer >= 'A' && *buffer <= 'Z'){
			*buffer = *buffer + 32;
		}
		else{
			*buffer = *buffer;
		}	
		buffer++;
	}
	return str;
}

int main(){
	char test[] = "jGNJRTEGNGETInRTGnd";

	printf("test -> %s\n", ft_strlowcase(test));
	return 0;
}
