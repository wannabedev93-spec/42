#include <unistd.h>

void ft_print_numbers(){
	char c = '0';
	for (int i = 0; i <= 9;i++ ){
		char s = c + i;
		write(1,&s,1);
	}
}

int main(){
	ft_print_numbers();

	return 0;
}
