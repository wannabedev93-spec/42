#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
	if(n <= 0) return "";
	unsigned int i = 0;
	while(i < n){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(){
	char *src = "hello!";
	char dest[7];
	printf("%s\n",ft_strncpy(dest,src,2));
	return 0;
}
