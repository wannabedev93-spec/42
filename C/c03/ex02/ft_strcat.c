#include<stdio.h>

char *ft_strcat(char *dest, char *src){
	char *r = dest;
	while(*dest){
		dest++;
	}
	while(*src){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return r;
}

int main(){
	char dest[20] = "hello";
	char *src = " world!";

	printf("%s\n",ft_strcat(dest, src));
	return 0; 
}
