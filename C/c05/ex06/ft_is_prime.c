#include<stdio.h>

int ft_is_prime(int nb){
	int i = 2;
	if(nb <= 1) return 0;
	while(i <= nb / i){
		if(nb % i == 0) return 0;
		i++;
	}
	return 1;
}

int main(){
	
#include <stdio.h>

printf("Input: -100        | Expected: 0 | Result: %d\n", ft_is_prime(-100));
printf("Input: -7          | Expected: 0 | Result: %d\n", ft_is_prime(-7));
printf("Input: -2          | Expected: 0 | Result: %d\n", ft_is_prime(-2));
printf("Input: -1          | Expected: 0 | Result: %d\n", ft_is_prime(-1));
printf("Input: 0           | Expected: 0 | Result: %d\n", ft_is_prime(0));
printf("Input: 1           | Expected: 0 | Result: %d\n", ft_is_prime(1));

printf("Input: 2           | Expected: 1 | Result: %d\n", ft_is_prime(2));
printf("Input: 3           | Expected: 1 | Result: %d\n", ft_is_prime(3));
printf("Input: 4           | Expected: 0 | Result: %d\n", ft_is_prime(4));
printf("Input: 5           | Expected: 1 | Result: %d\n", ft_is_prime(5));
printf("Input: 6           | Expected: 0 | Result: %d\n", ft_is_prime(6));
printf("Input: 7           | Expected: 1 | Result: %d\n", ft_is_prime(7));
printf("Input: 8           | Expected: 0 | Result: %d\n", ft_is_prime(8));
printf("Input: 9           | Expected: 0 | Result: %d\n", ft_is_prime(9));
printf("Input: 10          | Expected: 0 | Result: %d\n", ft_is_prime(10));
printf("Input: 11          | Expected: 1 | Result: %d\n", ft_is_prime(11));

printf("Input: 13          | Expected: 1 | Result: %d\n", ft_is_prime(13));
printf("Input: 17          | Expected: 1 | Result: %d\n", ft_is_prime(17));
printf("Input: 19          | Expected: 1 | Result: %d\n", ft_is_prime(19));
printf("Input: 23          | Expected: 1 | Result: %d\n", ft_is_prime(23));
printf("Input: 29          | Expected: 1 | Result: %d\n", ft_is_prime(29));

printf("Input: 25          | Expected: 0 | Result: %d\n", ft_is_prime(25));
printf("Input: 35          | Expected: 0 | Result: %d\n", ft_is_prime(35));
printf("Input: 49          | Expected: 0 | Result: %d\n", ft_is_prime(49));
printf("Input: 77          | Expected: 0 | Result: %d\n", ft_is_prime(77));
printf("Input: 91          | Expected: 0 | Result: %d\n", ft_is_prime(91));
printf("Input: 121         | Expected: 0 | Result: %d\n", ft_is_prime(121));
printf("Input: 143         | Expected: 0 | Result: %d\n", ft_is_prime(143));
printf("Input: 169         | Expected: 0 | Result: %d\n", ft_is_prime(169));

printf("Input: 97          | Expected: 1 | Result: %d\n", ft_is_prime(97));
printf("Input: 101         | Expected: 1 | Result: %d\n", ft_is_prime(101));
printf("Input: 997         | Expected: 1 | Result: %d\n", ft_is_prime(997));
printf("Input: 1000        | Expected: 0 | Result: %d\n", ft_is_prime(1000));

printf("Input: 2147483647  | Expected: 1 | Result: %d\n", ft_is_prime(2147483647));

	return 0;
}
