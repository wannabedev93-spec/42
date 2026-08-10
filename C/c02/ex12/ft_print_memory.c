#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_hex(char c){
	char *hex = "0123456789ABCDEF";
	int a = c % 16;
	int b = c / 16;
	ft_putchar(hex[b]);
	ft_putchar(hex[a]);
}

void print_pointer(char *src){
	if(!src){
		write(1,"0x0", 3);
		return;
	}
	unsigned long int p = (unsigned long int)src;
	char buffer[sizeof(long int) * 2];
	int a;
	char *hex = "0123456789ABCDEF";
	int i = 0;
	while(p > 0){
		a = p % 16;
		p /= 16;
		buffer[i++] = hex[a];
	}
	write(1,"0x",2);
	i--;
	while(i >= 0){
		write(1, &buffer[i--], 1);
	}
	write(1,": ",2);
}

void *ft_print_memory(void *addr, unsigned int size){
	unsigned int i = 0;
	char buffer[17];
	char *str = (char*)addr;
	while(i < size){
		print_pointer(&str[i]);
		int j;
		for(j = 0; j < 16 && i < size ; j++){
			ft_print_hex(str[i]);
			buffer[j] = str[i++];
			if( j % 2 == 1) write(1, " ", 1);
		}
		buffer[j] = '\0';
		j = 0;
		while(buffer[j]){
			if(buffer[j] <= 31 || buffer[j] == 127) ft_putchar('.');
			else{
				ft_putchar(buffer[j]);	
			}
			j++;
		}
		ft_putchar('\n');
	}
	return addr;
}

int main(){
	char str[] = "ajndjif jnfriuneirf ijnefi fiejn\afinerf ijnf\bijnef ijnefijn\0erfijenrf ijenfijenf ijnfkenjflhtf kjnefn";
	ft_print_memory(str, 99);
	return 0;	
}
