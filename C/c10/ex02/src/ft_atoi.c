

int ft_atoi(char *str){
	int num = 0;
	while(*str){
		if(*str < '0' || *str > '9') return -1;
		num = num * 10 + (*str - '0');
		str++;
	}
	return num;
}
