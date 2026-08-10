#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
	unsigned int i = 1;
	while(*s1 == *s2 && *s1 && i < n){
		s1++;
		s2++;
		i++;
	}
	if(n == 0) return 0;
	return *s1 - *s2;
}

int main(){

	char* s1 = "appla";
	char* s2 = "apple";
	unsigned int x = ft_strncmp(s1, s2, 0);
	printf("%d\n", x);
	return 0;
}

