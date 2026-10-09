#include<unistd.h>
#include <errno.h>
#include <libgen.h>
#include <fcntl.h>
#include <string.h>


void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_puts(char *str){
	while(*str){
		ft_putchar(*str);
		str++;
	}
}


void itox(int num, int in_idx, char *hex, char *hex_re){
        int flag = 0;
        int idx = in_idx - 1;
        if(num < 0){
                flag = 1;
                num = -num;
        }
        while(num > 0){
                hex_re[idx--] = hex[num%16];
                num = num / 16;
        }
        if(flag){
                idx = in_idx - 1;
                int k;
                int addon = 1;
                while(idx >= 0){
                        if(hex_re[idx] >= '0' && hex_re[idx] <= '9') k = hex_re[idx] - '0';
                        else k = hex_re[idx] - 'A' + 10;
                        hex_re[idx] = hex[((15 - k) + addon)%16];
                        if(addon && hex[((15 - k) + addon)%16] == '0') addon = 1;
                        else addon = 0;
                        idx--;
                }
        }
}


void ft_put_ascii(char *buffer, int count){
	int i = 0;
	ft_putchar('|');
	while(i < count){
		if(buffer[i] >= 32 && buffer[i] <= 126){
			ft_putchar(buffer[i]);
		}else{
			ft_putchar('.');
		}
		i++;
	}
	ft_putchar('|');
}


void ft_put_hex(char *buffer, char *hex, int in_idx){
	int i = 0;
	char char_buffer[2];
	int x;

	while(i < in_idx){
		itox(buffer[i], 2, hex, char_buffer);
		x = -1;
		while(++x < 2) ft_putchar(char_buffer[x]);
		i++;
		ft_putchar(' ');
		if(i % 8 == 0) ft_putchar(' ');
	}
}

int ft_strcmp(char *str1, char *str2){
	while(*str1){
		if(*str1 != *str2){
			return *str1 - *str2;
		}
		str1++;
		str2++;
	}
	return 0;
}


void set_buffer(char *buffer, int size){
	int i = 0;
	while(i < size - 1){
		buffer[i++] = '0';
	}
	buffer[i] = '\0';
}

#define SIZE 16

int main(int argc, char **argv){
	int flag = 0;
	char *file_path = argv[1];
	if(argc == 3) flag = 1;
	if(flag){
		if(ft_strcmp(argv[1], "-c")){
			ft_puts(basename(argv[0]));
			ft_puts(": wrong flag argument. correct flag => -c\n");
			return -1;
		}
		file_path = argv[2];
	}

	char *hex = "0123456789ABCDEF";

	int file;
	ssize_t bytes;

	int offset = 0;
	char offset_buffer[9];

	char buffer[SIZE];
	char fbuffer[SIZE];
	int count = 0;
	int i;
	
	file = open(file_path, O_RDONLY);
	if(file < 0){
		ft_puts(basename(argv[0]));
                ft_puts(": ");
		ft_puts(strerror(errno));
		return -1;
	}
	set_buffer(offset_buffer, 9);
	while((bytes = read(file,buffer,SIZE)) > 0){
		i = 0;
		while(i < bytes){
			if(count == SIZE){
				ft_puts(offset_buffer);
				offset += SIZE;
				itox(offset, 8, hex, offset_buffer);
				ft_puts("  ");
				ft_put_hex(fbuffer, hex, SIZE);
				if(flag) ft_put_ascii(fbuffer, SIZE);
				ft_putchar('\n');
				count = 0;
			}
			fbuffer[count] = buffer[i];
			i++;
			count++;
		}	
	}int k = -1;
	if(count >= 0){
		ft_puts(offset_buffer);
		offset += count;
                itox(offset, 8, hex, offset_buffer);
		ft_puts("  ");
		if(count > 0){
			ft_put_hex(fbuffer, hex, count);
			while(++k <= (SIZE - count)*3) ft_putchar(' ');
	                if(flag) ft_put_ascii(fbuffer, count);
		}
                ft_putchar('\n');
	}if(count > 0){
	 ft_puts(offset_buffer);
	 ft_putchar('\n');
	}
	close(file);
	return 0;
}



