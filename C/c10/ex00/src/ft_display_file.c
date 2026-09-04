#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include"ft_puts.h"

char *error_msg[] = {"File name missing.","Too many arguments.","Cannot read file."};

int main(int argc, char **argv){
	if(argc < 2){
		ft_puts(error_msg[0]);
	}else if(argc > 2){
		ft_puts(error_msg[1]);
	}
	
	int file = open(argv[1], O_RDONLY);
	char c;
	if(file < 0){
		ft_puts(error_msg[1]);
		return -1;
	}
	while(read(file, &c, 1)){
		ft_puts(&c);
	}
	return 0;	
}
