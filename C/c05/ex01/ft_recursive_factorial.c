#include<stdio.h>


int ft_recursive_factorial(int nb){
	if(nb < 0) return 0;
	else if(nb <= 1) return 1;

	return nb * ft_recursive_factorial(nb - 1);
}

int main(){
	printf("Input: -10 | Expected: 0 | Result: %d\n", ft_recursive_factorial(-10));
	printf("Input:  -5 | Expected: 0 | Result: %d\n", ft_recursive_factorial(-5));
	printf("Input:  -1 | Expected: 0 | Result: %d\n", ft_recursive_factorial(-1));

	printf("Input:   0 | Expected: 1 | Result: %d\n", ft_recursive_factorial(0));
	printf("Input:   1 | Expected: 1 | Result: %d\n", ft_recursive_factorial(1));
	printf("Input:   2 | Expected: 2 | Result: %d\n", ft_recursive_factorial(2));
	printf("Input:   3 | Expected: 6 | Result: %d\n", ft_recursive_factorial(3));
	printf("Input:   4 | Expected: 24 | Result: %d\n", ft_recursive_factorial(4));
	printf("Input:   5 | Expected: 120 | Result: %d\n", ft_recursive_factorial(5));
	printf("Input:   6 | Expected: 720 | Result: %d\n", ft_recursive_factorial(6));
	printf("Input:   7 | Expected: 5040 | Result: %d\n", ft_recursive_factorial(7));
	printf("Input:   8 | Expected: 40320 | Result: %d\n", ft_recursive_factorial(8));
	printf("Input:   9 | Expected: 362880 | Result: %d\n", ft_recursive_factorial(9));
	printf("Input:  10 | Expected: 3628800 | Result: %d\n", ft_recursive_factorial(10));
	printf("Input:  11 | Expected: 39916800 | Result: %d\n", ft_recursive_factorial(11));
	printf("Input:  12 | Expected: 479001600 | Result: %d\n", ft_recursive_factorial(12));

	/* Overflow (subject says behavior is undefined) */
	printf("Input:  13 | Expected: Undefined | Result: %d\n", ft_recursive_factorial(13));
	printf("Input:  14 | Expected: Undefined | Result: %d\n", ft_recursive_factorial(14));
	printf("Input:  20 | Expected: Undefined | Result: %d\n", ft_recursive_factorial(20));

	return 0;
}
