#include <unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_putstr_non_printable(char *str){
	char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int a;
	int b;
	while(*str){
		if(*str < 32 || *str == 127){
			ft_putchar('\\');
			a = *str % 16;
			b = *str / 16;
			ft_putchar(hex[b]);
			ft_putchar(hex[a]);
		}else{
			ft_putchar(*str);
		}
		str++;
	}
}


int main (){

	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return 0;
}



