#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int n){
	unsigned int i = 0;
	while(*dest && i < n){
		dest++;
		i++;
	}
	unsigned len = i;
	char *temp = src;
	while(*temp){
		len++;
		temp++;
	}
	if(i == n) return len;
	while(*src && i < n - 1){

		*dest = *src;
		dest++;
		src++;
		i++;
	
	}
	*(dest) = '\0';
	return len;
}
