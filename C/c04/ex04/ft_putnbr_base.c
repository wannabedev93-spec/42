#include <unistd.h>

int str_check(char* str){
	int len = 0;
	int double_char [256] = {0}; 
	while(*str){
		if (double_char[(unsigned char)*str]
   	 || *str == '+'
   	 || *str == '-'
   	 || *str == ' '
   	 || *str == '\t'
   	 || *str == '\n'
   	 || *str == '\v'
   	 || *str == '\f'
   	 || *str == '\r')
	{
   	 return (-1);
	}
		double_char[(unsigned char)*str] = 1;
		str++;
		len++;
	}
	return len;
}

void ft_putnbr_base(int nbr, char *base){
	int base_len = str_check(base);

	if(base_len <= 1) return;

	char base_rep[32];
	int i = 0;
	int index;
	long nbr0 = nbr;
	if(nbr0 < 0) {
		nbr0 = -nbr0;
		write(1, "-", 1);
		}
	
	do{
		index = nbr0 % base_len;
		nbr0 /= base_len;
		base_rep[i++] = base[index];
	}while(nbr0 > 0);
	while(i > 0){
		write(1, &base_rep[--i], 1);
	}
	write(1, "\n",1);

	return;
	
}

int main(){
	ft_putnbr_base(773,"01");
	ft_putnbr_base(773,"0123456789abcdef");
	ft_putnbr_base(0,"01");
        ft_putnbr_base(0,"0123456789abcdef");
	ft_putnbr_base(-43,"01");
        ft_putnbr_base(0,"01 23456789abcdef");

	return 0;
}
