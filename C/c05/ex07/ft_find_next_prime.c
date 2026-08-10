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

int ft_find_next_prime(int nb){
	if(nb <= 2) return 2;
	while(!ft_is_prime(nb)){
		nb++;
	}
	return nb;
}


int main(){
	printf("Input: -100 | Expected: 2   | Result: %d\n", ft_find_next_prime(-100));
printf("Input:  -10 | Expected: 2   | Result: %d\n", ft_find_next_prime(-10));
printf("Input:   -1 | Expected: 2   | Result: %d\n", ft_find_next_prime(-1));
printf("Input:    0 | Expected: 2   | Result: %d\n", ft_find_next_prime(0));
printf("Input:    1 | Expected: 2   | Result: %d\n", ft_find_next_prime(1));
printf("Input:    2 | Expected: 2   | Result: %d\n", ft_find_next_prime(2));
printf("Input:    3 | Expected: 3   | Result: %d\n", ft_find_next_prime(3));
printf("Input:    4 | Expected: 5   | Result: %d\n", ft_find_next_prime(4));
printf("Input:    5 | Expected: 5   | Result: %d\n", ft_find_next_prime(5));
printf("Input:    6 | Expected: 7   | Result: %d\n", ft_find_next_prime(6));
printf("Input:    7 | Expected: 7   | Result: %d\n", ft_find_next_prime(7));
printf("Input:    8 | Expected: 11  | Result: %d\n", ft_find_next_prime(8));
printf("Input:    9 | Expected: 11  | Result: %d\n", ft_find_next_prime(9));
printf("Input:   10 | Expected: 11  | Result: %d\n", ft_find_next_prime(10));
printf("Input:   11 | Expected: 11  | Result: %d\n", ft_find_next_prime(11));
printf("Input:   12 | Expected: 13  | Result: %d\n", ft_find_next_prime(12));
printf("Input:   24 | Expected: 29  | Result: %d\n", ft_find_next_prime(24));
printf("Input:   29 | Expected: 29  | Result: %d\n", ft_find_next_prime(29));
printf("Input:   30 | Expected: 31  | Result: %d\n", ft_find_next_prime(30));
printf("Input:   90 | Expected: 97  | Result: %d\n", ft_find_next_prime(90));
printf("Input:  100 | Expected: 101 | Result: %d\n", ft_find_next_prime(100));

	return 0;
}
