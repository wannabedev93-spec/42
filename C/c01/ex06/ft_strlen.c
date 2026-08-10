#include<stdio.h>

int ft_strlen(char *str){
	int len = 0;
	while(*str){
		len++;
		str++;
	}	
	return len;
}

int main(){
	char *str = "ledterd";
	int res = ft_strlen(str);
	printf("%d\n", res);
	return 0;
}
