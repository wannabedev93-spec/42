#include<stdio.h>

int ft_fibonacci(int index){
	if(index < 0) return -1;
	if(index == 0) return 0;
	if(index == 1) return 1;

	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(){
	printf("Index: -10 | Expected: -1      | Result: %d\n", ft_fibonacci(-10));
printf("Index:  -5 | Expected: -1      | Result: %d\n", ft_fibonacci(-5));
printf("Index:  -1 | Expected: -1      | Result: %d\n", ft_fibonacci(-1));

printf("Index:   0 | Expected: 0       | Result: %d\n", ft_fibonacci(0));
printf("Index:   1 | Expected: 1       | Result: %d\n", ft_fibonacci(1));
printf("Index:   2 | Expected: 1       | Result: %d\n", ft_fibonacci(2));
printf("Index:   3 | Expected: 2       | Result: %d\n", ft_fibonacci(3));
printf("Index:   4 | Expected: 3       | Result: %d\n", ft_fibonacci(4));
printf("Index:   5 | Expected: 5       | Result: %d\n", ft_fibonacci(5));
printf("Index:   6 | Expected: 8       | Result: %d\n", ft_fibonacci(6));
printf("Index:   7 | Expected: 13      | Result: %d\n", ft_fibonacci(7));
printf("Index:   8 | Expected: 21      | Result: %d\n", ft_fibonacci(8));
printf("Index:   9 | Expected: 34      | Result: %d\n", ft_fibonacci(9));
printf("Index:  10 | Expected: 55      | Result: %d\n", ft_fibonacci(10));
printf("Index:  15 | Expected: 610     | Result: %d\n", ft_fibonacci(15));
printf("Index:  20 | Expected: 6765    | Result: %d\n", ft_fibonacci(20));
printf("Index:  30 | Expected: 832040  | Result: %d\n", ft_fibonacci(30));

/* Overflow (undefined for int) */
printf("Index:  46 | Expected: 1836311903 | Result: %d\n", ft_fibonacci(46));
printf("Index:  47 | Expected: Undefined  | Result: %d\n", ft_fibonacci(47));

	return 0;
}
