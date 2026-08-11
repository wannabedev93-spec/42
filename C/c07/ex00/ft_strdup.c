#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_puts(char* s){
	while(*s){
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int ft_strlen(char *s){
	int size = 0;
	while(*s){
		size++;
		s++;
	}
	return size;
}

char *ft_strcpy(char *s, char* r){
	char *start = r;
	while(*s){
		*r = *s;
		r++;
		s++;
	}
	*r = '\0';
	return start;
}

char *ft_strdup(char *src){
	int len = ft_strlen(src) + 1;
	char *r = (char*)malloc(len);
	if(r == NULL) return NULL;
	ft_strcpy(src,r);
	return r;
}

#include <stdio.h>

int main(void)
{
	char src1[] = "ouahb handsome and bogooos";
	char src2[] = "";
	char src3[] = "a";
	char src4[] = "hello world";
	char src5[] = "   leading and trailing spaces   ";
	char src6[] = "1234567890";
	char *dup;

	printf("\n===== TEST 1: Normal string =====\n\n");
	dup = ft_strdup(src1);
	printf("Original:  %s\n", src1);
	printf("Duplicate: %s\n", dup);
	free(dup);

	printf("\n===== TEST 2: Empty string =====\n\n");
	dup = ft_strdup(src2);
	printf("Original:  \"%s\"\n", src2);
	printf("Duplicate: \"%s\"\n", dup);
	free(dup);

	printf("\n===== TEST 3: Single character =====\n\n");
	dup = ft_strdup(src3);
	printf("Original:  %s\n", src3);
	printf("Duplicate: %s\n", dup);
	free(dup);

	printf("\n===== TEST 4: Normal sentence =====\n\n");
	dup = ft_strdup(src4);
	printf("Original:  %s\n", src4);
	printf("Duplicate: %s\n", dup);
	free(dup);

	printf("\n===== TEST 5: Spaces =====\n\n");
	dup = ft_strdup(src5);
	printf("Original:  \"%s\"\n", src5);
	printf("Duplicate: \"%s\"\n", dup);
	free(dup);

	printf("\n===== TEST 6: Numbers =====\n\n");
	dup = ft_strdup(src6);
	printf("Original:  %s\n", src6);
	printf("Duplicate: %s\n", dup);
	free(dup);

	printf("\n===== TEST 7: Independence =====\n\n");

	dup = ft_strdup(src4);

	printf("Before modification:\n\n");
	printf("Original:  %s\n", src4);
	printf("Duplicate: %s\n", dup);

	dup[0] = 'X';

	printf("\nAfter modifying duplicate[0] to 'X':\n\n");
	printf("Original:  %s\n", src4);
	printf("Duplicate: %s\n", dup);

	free(dup);

	printf("\n===== ALL TESTS COMPLETE =====\n\n");

	return 0;
}
