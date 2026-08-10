#include <unistd.h>

void printchar(char c){
	write(1,&c,1);
}

void ft_putnbr(int nb){
	long n = nb;
	
	if(n < 0){
		printchar('-');
		n = -n;
	}

	if(n <= 9){ printchar(n + '0');
        return;}
	

		ft_putnbr(n / 10);
		printchar(n % 10 + '0');

}



int main(){

	int n = -59484332;
	ft_putnbr(n);

	return 0;

}
        
