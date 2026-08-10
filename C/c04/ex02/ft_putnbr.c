#include<unistd.h>

void ft_putnbr(int nb00){
	long nb = nb00;
	if(nb == 0) {
		write(1, "0", 1);
		return;
	}
	char buffer[32];
	int i = 0;
	int neg = 0;
	if(nb < 0){ 
		neg = 1;
		nb = -nb;
	}
	while(nb > 0){
		buffer[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if(neg) buffer[i] = '-';
	else i--;
	while(i >= 0){
		write(1, &buffer[i--], 1);
	}
	write(1, "\n", 1);
}

int main(){
	int nb = 74975;
	int nb1 = -839735;
	int nb2 = 0;

	ft_putnbr(nb);
	ft_putnbr(nb1);
	ft_putnbr(nb2);
	
	return 0;
}
