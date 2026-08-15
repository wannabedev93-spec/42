#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void print_int(int nb){
	if(nb == 0) ft_putchar('0');
	long n = nb;
	int neg = 0;
	char buff[256];
	int i = 0;
	if(n < 0){ 
		n *= -1;
		neg = 1;
	}
	while(n > 0){
		buff[i++] = n % 10 + '0';
		n /= 10;
	}
	if(neg) ft_putchar('-');
	while(--i >= 0){
		ft_putchar(buff[i]);
	}
}

int ft_ultimate_range(int **range, int min, int max){
	int i = 0;
	if(max <= min) {
		*range = NULL;
		return 0;
	}
	else{
		
		*range = malloc(sizeof(int) * (max - min));
		if(*range == NULL) return -1;
		while(min < max){
			(*range)[i++] = min++;
		}
	}
	return i;
}

int main(void)
{
	int *range;
	int result;

	range = NULL;

	printf("TEST 1: min=0, max=5\n");
	result = ft_ultimate_range(&range, 0, 5);
	printf("Expected return: 5\n");
	printf("Your return: %d\n", result);
	printf("Expected array: [0, 1, 2, 3, 4]\n");
	printf("Your array: ");
	if (range == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0; i < result; i++)
			printf("%d%s", range[i], i == result - 1 ? "\n" : ", ");
		free(range);
	}

	printf("\nTEST 2: min=-5, max=0\n");
	result = ft_ultimate_range(&range, -5, 0);
	printf("Expected return: 5\n");
	printf("Your return: %d\n", result);
	printf("Expected array: [-5, -4, -3, -2, -1]\n");
	printf("Your array: ");
	if (range == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0; i < result; i++)
			printf("%d%s", range[i], i == result - 1 ? "\n" : ", ");
		free(range);
	}

	printf("\nTEST 3: min=-5, max=5\n");
	result = ft_ultimate_range(&range, -5, 5);
	printf("Expected return: 10\n");
	printf("Your return: %d\n", result);
	printf("Expected array: [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4]\n");
	printf("Your array: ");
	if (range == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0; i < result; i++)
			printf("%d%s", range[i], i == result - 1 ? "\n" : ", ");
		free(range);
	}

	printf("\nTEST 4: min=5, max=5\n");
	result = ft_ultimate_range(&range, 5, 5);
	printf("Expected return: 0\n");
	printf("Your return: %d\n", result);
	printf("Expected array: NULL\n");
	printf("Your array: %s\n", range == NULL ? "NULL" : "NOT NULL");
	if (range != NULL)
		free(range);

	printf("\nTEST 5: min=10, max=5\n");
	result = ft_ultimate_range(&range, 10, 5);
	printf("Expected return: 0\n");
	printf("Your return: %d\n", result);
	printf("Expected array: NULL\n");
	printf("Your array: %s\n", range == NULL ? "NULL" : "NOT NULL");
	if (range != NULL)
		free(range);

	printf("\nTEST 6: min=-1, max=0\n");
	result = ft_ultimate_range(&range, -1, 0);
	printf("Expected return: 1\n");
	printf("Your return: %d\n", result);
	printf("Expected array: [-1]\n");
	printf("Your array: ");
	if (range == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0; i < result; i++)
			printf("%d%s", range[i], i == result - 1 ? "\n" : ", ");
		free(range);
	}

	printf("\nTEST 7: min=0, max=1\n");
	result = ft_ultimate_range(&range, 0, 1);
	printf("Expected return: 1\n");
	printf("Your return: %d\n", result);
	printf("Expected array: [0]\n");
	printf("Your array: ");
	if (range == NULL)
		printf("NULL\n");
	else
	{
		for (int i = 0; i < result; i++)
			printf("%d%s", range[i], i == result - 1 ? "\n" : ", ");
		free(range);
	}

	return (0);
}
