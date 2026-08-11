#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<limits.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void put_int(int nb){
	if(nb == 0){
		ft_putchar('0');
		return;
	}
	long n = nb;
	int neg = 0;
	int i = 0;
	char buff[512];
	if(n < 0){
		n *= -1;
		neg = 1;
	}
	while(n > 0){
		buff[i] = n % 10;
		n /= 10;
		i++;
	}
	if(neg) ft_putchar('-');
	while(--i >= 0){
		ft_putchar(buff[i] + '0');
	}
	
}

int *ft_range(int min, int max){
	if(min >= max) return NULL;
	int len = max - min;
	int *arr = malloc(len * sizeof(int));
	int i = 0;
	while(min < max){
		arr[i] = min;
		min++;
		i++;
	}
	return arr;
}


int main(void)
{
	int min;
	int max;
	int size;
	int *arr;
	int i;

	/* TEST 1: Normal positive range */
	min = 2;
	max = 7;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 1: Positive range =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 2: Negative range */
	min = -7;
	max = -2;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 2: Negative range =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 3: Crossing zero */
	min = -5;
	max = 6;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 3: Crossing zero =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 4: One element */
	min = 5;
	max = 6;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 4: One element =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 5: min == max */
	min = 5;
	max = 5;
	arr = ft_range(min, max);

	printf("\n===== TEST 5: min == max =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	if (arr == NULL)
		printf("Result: NULL\n");
	else
	{
		printf("ERROR: expected NULL\n");
		free(arr);
	}

	/* TEST 6: min > max */
	min = 10;
	max = 5;
	arr = ft_range(min, max);

	printf("\n===== TEST 6: min > max =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	if (arr == NULL)
		printf("Result: NULL\n");
	else
	{
		printf("ERROR: expected NULL\n");
		free(arr);
	}

	/* TEST 7: INT_MIN */
	min = INT_MIN;
	max = INT_MIN + 5;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 7: INT_MIN =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 8: INT_MAX */
	min = INT_MAX - 4;
	max = INT_MAX;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 8: INT_MAX =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 9: INT_MIN to negative values */
	min = INT_MIN;
	max = INT_MIN + 1;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 9: Single INT_MIN =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	/* TEST 10: INT_MAX boundary */
	min = INT_MAX - 1;
	max = INT_MAX;
	size = max - min;
	arr = ft_range(min, max);

	printf("\n===== TEST 10: INT_MAX - 1 =====\n");
	printf("min = %d\nmax = %d\n\n", min, max);

	i = 0;
	while (i < size)
	{
		put_int(arr[i]);
		ft_putchar('\n');
		i++;
	}
	free(arr);

	return (0);
}
