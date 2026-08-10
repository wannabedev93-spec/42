#include<stdio.h>

char *ft_strcapitalize(char *str){
	char *buff = str;
	while(*buff){
		if(buff == str ){
			if(*buff >= 'a' && *buff <= 'z'){
				*buff = *buff - 32;
			}
		}else if(!(*(buff - 1)  >= '0' && *(buff - 1) <= '9') 
			&& !( *(buff - 1) >= 'a' && (*(buff - 1) <= 'z'))
			&& !( *(buff - 1) >= 'A' && (*(buff - 1) <= 'Z'))){
				if( *buff >= 'a' && *buff <= 'z' ){
					*buff = *buff - 32;
				}
		}else{
			if(*buff >= 'A' && *buff <= 'Z') *buff = *buff + 32;
		}
		buff++;
	}
	return str;
}

int main(){
	char str[] = "SALUT, COMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("test -> %s\n", ft_strcapitalize(str));
	return 0;
}
