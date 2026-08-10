#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
	while(*s1 == *s2 && *s1){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main(){

	char* s1 = "kjhfefbbg";
	char* s2 = "jhdckjhnvg";
	int x = ft_strcmp(s1, s2);
	printf("%d\n", x);
	return 0;
}
