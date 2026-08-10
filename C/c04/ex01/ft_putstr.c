#include <unistd.h>

void ft_putstr(char *str){
	while(*str){
		write(1,str,1);
		str++;
	}
}


int main(){
	char *text = "hello bunny buddy\nkoko fafa.\n";
	ft_putstr(text);
	return 0;
}
