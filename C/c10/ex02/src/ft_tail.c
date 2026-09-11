#include"ft_tail.h"

int main(int argc, char **argv){
	int file, bytes, num, i, j, count;
	char buffer[1024];
	if(argc != 4){
		ft_puts("Wrong input, Sample input => ./ft_tail -c 35 filename\n");
		return 1;
	}
	if(ft_strcmp(argv[1], "-c")){
		ft_puts(basename(argv[0]));
		ft_puts("\nWrong flag, Sample input => ./ft_tail -c 35 filename\n");
                return 1;
	}
	if((num = ft_atoi(argv[2])) <= 0){
		ft_puts(basename(argv[0]));
                ft_puts("\nWrong integer, Sample input => ./ft_tail -c 35 filename\n");
                return 1;
        } 
	file = open(argv[3], O_RDONLY);
	if(file < 0){
		ft_puts(basename(argv[0]));
		ft_putchar('\n');
		ft_puts(strerror(errno));
		return 1;
	}
	char *re = malloc(sizeof(char) * (num));
	i = count = 0;
	while((bytes = read(file, buffer, 1024)) > 0){
		j = 0;
		while(j < bytes){
			if(i == num) i = 0;
			re[i++] = buffer[j++];
			count++;
		}
	}
	int k = 0;
	while(k < num){
		if(count >= num){
			ft_putchar(re[(((k++) + i) % num)]);
		}else{
			ft_putchar(re[k++]);
			if(k == count)break;
		}
	}
	close(file);
	free(re);
	return 0;
}
