#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n){
	char *r = dest;
	while(*dest){
		dest++;
	}
	unsigned int i = 0;
	while(i < n && *src){
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return r;
}

int main(){
	char dest[20] = "hello";
	char *src = " world!";

	printf("%s\n",ft_strncat(dest, src, 9));
	return 0; 
}
