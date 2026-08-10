#include <unistd.h>

void ft_print_comb(){

 	char buff[4];
	buff[3] = '\0';
	for(char a = '0'; a <= '7'; a++){
		buff[0] = a;
		for(char b = a + 1; b <= '8'; b++){
			buff[1] = b;
			for(int c = b + 1; c <= '9'; c++){
				buff[2] = c;
				write(1, buff,4);
				if(a == '7' && b == '8' && c == '9');
				else  write(1,", ",1);
			}
		}
	}
}


int main(){
	ft_print_comb();
	return 0;
}
