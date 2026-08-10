#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	unsigned int i = 0;
	unsigned int l = 0;
	if(size > 0){
		while(i < size - 1 && src[i]){
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while(*src){
		l++;
		src++;
	}
	return l;	
}

int main (){
	char *src = "hello!";
	char dest[8];
	printf("%d\n",ft_strlcpy(dest, src, 8));
	printf("%s\n", dest);
	return 0;
}
