#include<unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_puts(char *s){
	int i = 0;
	while(s[i] != '\0'){
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char *argv[]){
	int i = argc;
	while(--i > 0){
		ft_puts(argv[i]);
	}
	return 0;
}
