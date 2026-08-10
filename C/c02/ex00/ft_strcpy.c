#include<stdio.h>

char *ft_strcpy(char *dest, char *src){
	int i = 0;
	do{
		dest[i] = src[i];
		i++;
	}while(src[i]);
	
	return dest;
}

int main(){
	char *src = "hello!";
	char dest[7];
	printf("%s\n", ft_strcpy(dest, src));
	return 0;
}
