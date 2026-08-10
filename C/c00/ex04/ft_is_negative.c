#include <unistd.h>

void ft_is_negative(int num){

	char p = 'P';
	char n = 'N';
	if( num < 0 ) write(1,&n,1);
	else write(1,&p,1);
}

int main(){
	int n = 1;
	ft_is_negative(n);
	n = -1;
	ft_is_negative(n);

	return 0;
}
