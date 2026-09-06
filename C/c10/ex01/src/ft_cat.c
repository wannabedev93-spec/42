#include"ft_cat.h"

int main(int argc, char **argv){
	if(argc < 2){
		ft_puts("File name missing.\n");
		return 1;
	}else if(argc > 2){
		ft_puts("Too many arguments.\n");
		return 1;
	}

	int file = open(argv[1], O_RDONLY);
	if(file < 0){
		ft_puts(basename(argv[0]));
		ft_puts(": ");
		ft_puts(strerror(errno));
		return -1;
	}
	
	char buffer[__BUFF];
	int bytes = 0;
	while((bytes = read(file, buffer, __BUFF - 1))){
		if(bytes == -1){
			ft_puts(basename(argv[0]));
               		ft_puts(": ");
			ft_puts(strerror(errno));
                	return -1;
		}
		ft_puts(buffer);
	}
	close(file);
	return 0;
}
