#include<unistd.h>
#include<stdlib.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_puts(char* s){
	while(*s){
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int ft_strlen(char *s){
	int size = 0;
	while(*s){
		size++;
		s++;
	}
	return size;
}

char *ft_strcpy(char *s, char* r){
	while(*s){
		*r = *s;
		r++;
		s++;
	}
	*r = '\0';
	return r;
}

char *ft_strdup(char *src){
	int len = ft_strlen(src) + 1;
	char *r = (char*)malloc(len);
	ft_strcpy(src,r);
	return r;
}

int main(){
	char* s = "ouahb handsome and bogooos";
	char* r = ft_strdup(s);
	ft_puts(r);
	return 0;
}
