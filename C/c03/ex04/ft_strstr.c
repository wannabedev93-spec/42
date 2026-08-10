#include<stdio.h>

char *ft_strstr(char *str, char *to_find){
	if(!*to_find) return str;
	char *p = to_find;
	char *start;
	while(*str){
		if(*str == *p){
			start = str;
			while(*p && *str == *p){
				str++;
				p++;
			}
			if(!*p) return start;
			p = to_find;
			--str;
		}
		str++;
	}
	return 0;
}

int main(){
	char *s1 = "hello world!";
	char *s2 = "orl";
	
	printf("%s\n", ft_strstr(s1, s2));
	return 0;
}
