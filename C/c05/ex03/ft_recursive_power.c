#include <stdio.h>

int ft_recursive_power(int nb, int power){
	if(power < 0) return 0;
	if(power == 0) return 1;
	if(power == 1) return nb;
	return nb * ft_recursive_power(nb, power - 1);
}

int main(){
	printf("2^(-3)  | Expected: 0      | Result: %d\n", ft_recursive_power(2, -3));
printf("5^(-1)  | Expected: 0      | Result: %d\n", ft_recursive_power(5, -1));

printf("0^0     | Expected: 1      | Result: %d\n", ft_recursive_power(0, 0));
printf("5^0     | Expected: 1      | Result: %d\n", ft_recursive_power(5, 0));
printf("1^0     | Expected: 1      | Result: %d\n", ft_recursive_power(1, 0));

printf("0^1     | Expected: 0      | Result: %d\n", ft_recursive_power(0, 1));
printf("0^5     | Expected: 0      | Result: %d\n", ft_recursive_power(0, 5));

printf("1^5     | Expected: 1      | Result: %d\n", ft_recursive_power(1, 5));
printf("2^1     | Expected: 2      | Result: %d\n", ft_recursive_power(2, 1));
printf("2^2     | Expected: 4      | Result: %d\n", ft_recursive_power(2, 2));
printf("2^3     | Expected: 8      | Result: %d\n", ft_recursive_power(2, 3));
printf("2^10    | Expected: 1024   | Result: %d\n", ft_recursive_power(2, 10));

printf("3^4     | Expected: 81     | Result: %d\n", ft_recursive_power(3, 4));
printf("5^3     | Expected: 125    | Result: %d\n", ft_recursive_power(5, 3));
printf("10^5    | Expected: 100000 | Result: %d\n", ft_recursive_power(10, 5));

printf("(-2)^1  | Expected: -2     | Result: %d\n", ft_recursive_power(-2, 1));
printf("(-2)^2  | Expected: 4      | Result: %d\n", ft_recursive_power(-2, 2));
printf("(-2)^3  | Expected: -8     | Result: %d\n", ft_recursive_power(-2, 3));
printf("(-2)^4  | Expected: 16     | Result: %d\n", ft_recursive_power(-2, 4));

/* Overflow (undefined behavior) */
printf("2^31    | Expected: Undefined | Result: %d\n", ft_recursive_power(2, 31));
printf("10^10   | Expected: Undefined | Result: %d\n", ft_recursive_power(10, 10));

	return 0;
}
