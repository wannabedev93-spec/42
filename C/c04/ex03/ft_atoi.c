#include<stdio.h>

int ft_atoi(char *str){
	int sign = 1;
	int result = 0;

	while (*str == ' '
   		 || *str == '\t'
   		 || *str == '\n'
   		 || *str == '\v'
   		 || *str == '\f'
   		 || *str == '\r') str++;
	
	while(*str == '+' || *str == '-'){
		if(*str == '-'){
			sign *= -1;
		}
		str++;
	}
	while(*str >= '0' && *str <= '9'){
		result = result * 10 + *str - '0';
		str++;
	}
	return result * sign;
}

int main(){
	char* str = "1234";
	char* str2 = "-1234";
	char* str3 = "-+--++---847383dnjdc839";
	char* str4 = "  -  -+-9835o53";
	
	int a = ft_atoi(str);
	int b = ft_atoi(str4);
	int c = ft_atoi(str2);
	int d = ft_atoi(str3);

	printf("%d\n%d\n%d\n%d\n", a, b,c ,d);

	return 0;
}
