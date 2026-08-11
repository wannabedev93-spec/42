#include<unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_puts(char *s){
	while(*s){
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int ft_strcmp(char *s1, char *s2){
	while(*s1 || *s2){
		if(*s1 < *s2) return 1;
		else if(*s1 > *s2) return 0;
		s1++;
		s2++;
	}
	return 1;
}

int main(int argc, char *argv[]){
	char *temp;
	int flag = 0;
	int i = 1;
	while(i < argc - 1){
		if(!ft_strcmp(argv[i], argv[i + 1])){
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			flag = 0;
		}
		else{
			flag++;
		}
		i++;
		if(i == argc - 1) i = 1;
		if(flag == argc) break;
	}

	int j = 0;
	while(++j < argc){
		ft_puts(argv[j]);
	}

	return 0;
}
