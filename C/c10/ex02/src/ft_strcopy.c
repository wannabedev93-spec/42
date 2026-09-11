
void ft_strcopy(char *buffer, char *str){
	while(*str){
		*buffer = *str;
		str++;
		buffer++;
	}
}
